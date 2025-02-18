// Fill out your copyright notice in the Description page of Project Settings.


#include "GGIXRHandComponent.h"

//const TArray<FTransform>& UGGIXRHandComponent::GetBoneSpaceTransforms() const
//{
//	return BoneSpaceTransforms;
//}

UGGIXRHandComponent::UGGIXRHandComponent()
{
	for (auto& BoneElem : BoneNameMappings)
	{
		switch (BoneElem.Key)
		{
		case EOculusXRBone::Wrist_Root:
			BoneElem.Value = FName("Wrist Root");
			break;
		case EOculusXRBone::Forearm_Stub:
			BoneElem.Value = FName("Forearm Stub");
			break;
		case EOculusXRBone::Thumb_0:
			BoneElem.Value = FName("Thumb0");
			break;
		case EOculusXRBone::Thumb_1:
			BoneElem.Value = FName("Thumb1");
			break;
		case EOculusXRBone::Thumb_2:
			BoneElem.Value = FName("Thumb2");
			break;
		case EOculusXRBone::Thumb_3:
			BoneElem.Value = FName("Thumb3");
			break;
		case EOculusXRBone::Thumb_Tip:
			BoneElem.Value = FName("Thumb Tip");
			break;
		case EOculusXRBone::Index_1:
			BoneElem.Value = FName("Index1");
			break;
		case EOculusXRBone::Index_2:
			BoneElem.Value = FName("Index2");
			break;
		case EOculusXRBone::Index_3:
			BoneElem.Value = FName("Index3");
			break;
		case EOculusXRBone::Index_Tip:
			BoneElem.Value = FName("Index Tip");
			break;
		case EOculusXRBone::Middle_1:
			BoneElem.Value = FName("Middle1");
			break;
		case EOculusXRBone::Middle_2:
			BoneElem.Value = FName("Middle2");
			break;
		case EOculusXRBone::Middle_3:
			BoneElem.Value = FName("Middle3");
			break;
		case EOculusXRBone::Middle_Tip:
			BoneElem.Value = FName("Middle Tip");
			break;
		case EOculusXRBone::Ring_1:
			BoneElem.Value = FName("Ring1");
			break;
		case EOculusXRBone::Ring_2:
			BoneElem.Value = FName("Ring2");
			break;
		case EOculusXRBone::Ring_3:
			BoneElem.Value = FName("Ring3");
			break;
		case EOculusXRBone::Ring_Tip:
			BoneElem.Value = FName("Ring Tip");
			break;
		case EOculusXRBone::Pinky_0:
			BoneElem.Value = FName("Pinky0");
			break;
		case EOculusXRBone::Pinky_1:
			BoneElem.Value = FName("Pinky1");
			break;
		case EOculusXRBone::Pinky_2:
			BoneElem.Value = FName("Pinky2");
			break;
		case EOculusXRBone::Pinky_3:
			BoneElem.Value = FName("Pinky3");
			break;
		case EOculusXRBone::Pinky_Tip:
			BoneElem.Value = FName("Pinky Tip");
			break;
		default:
			break;
		}
	}
}
