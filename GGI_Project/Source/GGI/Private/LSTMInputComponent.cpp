// Fill out your copyright notice in the Description page of Project Settings.


#include "LSTMInputComponent.h"
#include "GGIGameInstance.h"
#include "GGIPawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
ULSTMInputComponent::ULSTMInputComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	GGIGameInstance = Cast<UGGIGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
}


// Called when the game starts
void ULSTMInputComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	Threshold = 0.97f;
	PreIndex = -1;
	SameCount = 0;
	SameCountThreshold = 15;

	Initialize();
}


// Called every frame
void ULSTMInputComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void ULSTMInputComponent::Initialize()
{
	// Example for automated loading
	if (NNEModelData)
	{
		UE_LOG(LogTemp, Display, TEXT("NNEModelData loaded %s"), *NNEModelData->GetName());
		// You can use PreLoadedModelData here to create a model and corresponding model instance(s)
		// PreLoadedModelData will be unloaded when the owning object or actor unloads

		 // Example for model creation
		TWeakInterfacePtr<INNERuntimeCPU> Runtime = UE::NNE::GetRuntime<INNERuntimeCPU>(FString("NNERuntimeORTCpu"));
		if (Runtime.IsValid())
		{
			ModelHelper = MakeShared<FMyModelHelper>();

			TSharedPtr<UE::NNE::IModelCPU> Model = Runtime->CreateModelCPU(NNEModelData);

			if (Model.IsValid())
			{
				ModelHelper->ModelInstance = Model->CreateModelInstanceCPU();

				if (ModelHelper->ModelInstance.IsValid())
				{
					ModelHelper->bIsRunning = false;

					// Example for querying and testing in- and outputs
					TConstArrayView<UE::NNE::FTensorDesc> InputTensorDescs = ModelHelper->ModelInstance->GetInputTensorDescs();
					checkf(InputTensorDescs.Num() == 1, TEXT("The current example supports only models with a single input tensor"));
					UE_LOG(LogTemp, Warning, TEXT("InputTensorDescsNum : %d"), InputTensorDescs.Num());

					UE::NNE::FSymbolicTensorShape SymbolicInputTensorShape = InputTensorDescs[0].GetShape();
					checkf(SymbolicInputTensorShape.IsConcrete(), TEXT("The current example supports only modelswithout  variable input tensor dimensions"));
					UE_LOG(LogTemp, Warning, TEXT("SymbolicInputTensorShape.IsConcrete() : %s"), SymbolicInputTensorShape.IsConcrete() ? TEXT("True") : TEXT("False"));


					TArray<UE::NNE::FTensorShape> InputTensorShapes = { UE::NNE::FTensorShape::MakeFromSymbolic(SymbolicInputTensorShape) };
					ModelHelper->ModelInstance->SetInputTensorShapes(InputTensorShapes);
					UE_LOG(LogTemp, Warning, TEXT("InputTensorShapesNum : %d"), InputTensorShapes.Num());

					TConstArrayView<UE::NNE::FTensorDesc> OutputTensorDescs = ModelHelper->ModelInstance->GetOutputTensorDescs();
					checkf(OutputTensorDescs.Num() == 1, TEXT("The current example supports only models with a single output tensor"));
					UE_LOG(LogTemp, Warning, TEXT("OutputTensorDescsNum : %d"), OutputTensorDescs.Num());

					UE::NNE::FSymbolicTensorShape SymbolicOutputTensorShape = OutputTensorDescs[0].GetShape();
					checkf(SymbolicOutputTensorShape.IsConcrete(), TEXT("The current example supports only models without variable output tensor dimensions"));
					UE_LOG(LogTemp, Warning, TEXT("SymbolicOutputTensorShape.IsConcrete() : %s"), SymbolicOutputTensorShape.IsConcrete() ? TEXT("True") : TEXT("False"));

					TArray<UE::NNE::FTensorShape> OutputTensorShapes = { UE::NNE::FTensorShape::MakeFromSymbolic(SymbolicOutputTensorShape) };
					UE_LOG(LogTemp, Warning, TEXT("OutputTensorShapesNum : %d"), OutputTensorShapes.Num());

					for (int i = 0; i < SymbolicInputTensorShape.Rank(); i++)
					{
						TConstArrayView<int32> View = SymbolicInputTensorShape.GetData();
						UE_LOG(LogTemp, Display, TEXT("Input View [%d]: %d"), i, View[i]);
					}

					for (int i = 0; i < SymbolicOutputTensorShape.Rank(); i++)
					{
						TConstArrayView<int32> View = SymbolicOutputTensorShape.GetData();
						UE_LOG(LogTemp, Display, TEXT("Output View [%d]: %d"), i, View[i]);
					}

					// Example for creating in- and outputs
					ModelHelper->InputData.SetNumZeroed(InputTensorShapes[0].Volume());
					ModelHelper->InputBindings.SetNumZeroed(1);
					ModelHelper->InputBindings[0].Data = ModelHelper->InputData.GetData();
					ModelHelper->InputBindings[0].SizeInBytes = ModelHelper->InputData.Num() * sizeof(float);
					UE_LOG(LogTemp, Display, TEXT("ModelHelper->InputData Num : %d"), ModelHelper->InputData.Num());


					ModelHelper->OutputData.SetNumZeroed(OutputTensorShapes[0].Volume());
					ModelHelper->OutputBindings.SetNumZeroed(1);
					ModelHelper->OutputBindings[0].Data = ModelHelper->OutputData.GetData();
					ModelHelper->OutputBindings[0].SizeInBytes = ModelHelper->OutputData.Num() * sizeof(float);
					UE_LOG(LogTemp, Display, TEXT("ModelHelper->OutputData Num : %d"), ModelHelper->OutputData.Num());
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("Failed to create the model instance"));
					ModelHelper.Reset();
				}
			}
			else
			{
				UE_LOG(LogTemp, Error, TEXT("Failed to create the model"));
				ModelHelper.Reset();
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Cannot find runtime NNERuntimeORTCpu, please enable the corresponding plugin"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NNEModelData is not set, please assign it in the editor"));
	}
}

void ULSTMInputComponent::ExecuteNNETickInference(const TArray<float>& InLSTMInputArray)
{
	if (ModelHelper.IsValid())
	{
		// Example for async inference
		if (!ModelHelper->bIsRunning)
		{
			// Process ModelHelper->OutputData from the previous run here
			// Fill in new data into ModelHelper->InputData here

			// TODO : ++

			ModelHelper->InputData = InLSTMInputArray;

			float MaxOutput = 0;
			int32 MaxIndex = -1;

			for (int32 i = 0; i < ModelHelper->OutputData.Num(); i++)
			{
				if (MaxOutput < ModelHelper->OutputData[i] && ModelHelper->OutputData[i] > Threshold)
				{
					MaxOutput = ModelHelper->OutputData[i];
					MaxIndex = i;
				}
			}

			if (-1 == MaxIndex)
			{
				SameCount = 0;
				PreIndex = -1;
			}
			else if (PreIndex == MaxIndex)
			{
				++SameCount;
			}
			else
			{
				PreIndex = MaxIndex;
			}


			
			FString Message;
			FColor TextColor;
			float DisplayTime = 1.0f;

			if (SameCount >= 15)
			{
				if (MaxIndex == -1)
				{
					Message = TEXT("???");
					TextColor = FColor::Black;
				}
				else if (MaxIndex == 0)
				{
					Message = TEXT("Bow");
					TextColor = FColor::Purple;
				}
				else if (MaxIndex == 1)
				{
					Message = TEXT("Sword");
					TextColor = FColor::Red;
				}
				else if (MaxIndex == 2)
				{
					Message = TEXT("Pistol");
					TextColor = FColor::Blue;
				}
				else if (MaxIndex == 3)
				{
					Message = TEXT("MachineGun");
					TextColor = FColor::Orange;
				}
				else if (MaxIndex == 4)
				{
					Message = TEXT("Spear");
					TextColor = FColor::Yellow;
				}
				else if (MaxIndex == 5)
				{
					Message = TEXT("Grenade");
					TextColor = FColor::Cyan;
				}

				GEngine->AddOnScreenDebugMessage(-1, DisplayTime, TextColor, Message);
			}
			else
			{
				Message = TEXT("?????????");
				TextColor = FColor::Black;
			}
			



			ModelHelper->bIsRunning = true;
			TSharedPtr<FMyModelHelper> ModelHelperPtr = ModelHelper;
			AsyncTask(ENamedThreads::AnyNormalThreadNormalTask, [ModelHelperPtr]()
				{
					if (ModelHelperPtr->ModelInstance->RunSync(ModelHelperPtr->InputBindings, ModelHelperPtr->OutputBindings) != UE::NNE::IModelInstanceCPU::ERunSyncStatus::Ok)
					{
						UE_LOG(LogTemp, Error, TEXT("Failed to run the model"));
					}
					AsyncTask(ENamedThreads::GameThread, [ModelHelperPtr]()
						{
							ModelHelperPtr->bIsRunning = false;
						});
				});
		}
	}
}

