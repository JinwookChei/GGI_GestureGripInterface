// Fill out your copyright notice in the Description page of Project Settings.


#include "GGIQueue.h"


LinkItem::LinkItem()
	: Next(nullptr)
{
}

GGIQueue::GGIQueue()
	: Head(nullptr),
	Tail(nullptr),
	MaxNum(10)
{
}

GGIQueue::~GGIQueue()
{
	for (int i = 0; i < Count; ++i)
	{
		Dequeue();
	}
}

bool GGIQueue::CircularEnqueue(const TArray<float>& InItems)
{
	if(Count < MaxNum)
	{
		LinkItem* NewLinkItem = new LinkItem;
		if (nullptr == NewLinkItem)
		{
			return false;
		}

		NewLinkItem->Items = InItems;

		if (nullptr == Tail)
		{
			Head = NewLinkItem;
			Tail = NewLinkItem;
			++Count;
		}
		else
		{
			Tail->Next = NewLinkItem;
			Tail = NewLinkItem;
			++Count;
		}

		return true;
	}
	else
	{
		Tail->Next = &*Head;
		Tail = &*Head;

		Head = Head->Next;
		Tail->Next = nullptr;
		Tail->Items = InItems;

		return true;
	}
}

bool GGIQueue::Dequeue()
{
	if (nullptr == Head)
	{
		return false;
	}
	else if (Head == Tail)
	{
		delete Head;
		Head = nullptr;
		Tail = nullptr;
		--Count;
	}
	else
	{
		LinkItem* TempItem = &*Head;
		Head = Head->Next;
		delete TempItem;
		TempItem = nullptr;
		--Count;
	}

	return true;
}

void GGIQueue::SetMaxNum(int32 InMaxNum)
{
	MaxNum = InMaxNum;
}

int32 GGIQueue::GetCount() const
{
	return Count;
}

void GGIQueue::GetAllData(TArray<float>& OutDataArray)
{
	LinkItem* pCurrentLinkItem = Head;
	while (pCurrentLinkItem)
	{
		for (int i = 0; i < pCurrentLinkItem->Items.Num(); ++i)
		{
			float TempData = pCurrentLinkItem->Items[i];
			OutDataArray.Push(TempData);
		}
		
		pCurrentLinkItem = pCurrentLinkItem->Next;
	}
}

