// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

struct LinkItem
{
	LinkItem();

	UPROPERTY()
	LinkItem* Next;

	TArray<float> Items;
};

class GGI_API GGIQueue
{
public:
	GGIQueue();
	~GGIQueue();

	UPROPERTY()
	LinkItem* Head;

	UPROPERTY()
	LinkItem* Tail;

	bool CircularEnqueue(const TArray<float>& InItems);
	bool Dequeue();

	void SetMaxNum(int32 InMaxNum);

	int32 GetCount() const;

	void GetAllData(TArray<float>& OutDataArray);

private:
	int32 Count;

	int32 MaxNum;
};
