//Furkan Yalçýn 20181701039
#include "QueType.h"
using namespace stdext;

QueType::QueType()
{
	front = NULL;
	rear = NULL;
}

void QueType::MakeEmpty()
{
	NodeType* tempPtr;
	while (front != NULL)
	{
		tempPtr = front;
		front = front->next;
		delete tempPtr;
	}
	rear = NULL;
}
QueType::~QueType()
{
	MakeEmpty();
}
bool QueType::IsFull() const
{
	NodeType* location;
	try
	{
		location = new NodeType;
		delete location;
		return false;
	}
	catch (std::bad_alloc exception)
	{
		return true;
	}
}
bool QueType::IsEmpty() const
{
	return (front == NULL);
}
void QueType::Enqueue(int newItem)
{
	if (IsFull())
		throw FullQueue();
	else
	{
		NodeType* newNode;
		newNode = new NodeType;
		newNode->info = newItem;
		newNode->next = NULL;
		if (rear == NULL)
			front = newNode;
		else
			rear->next = newNode;
		rear = newNode;
	}
}
void QueType::Dequeue(int& item)
{
	if (IsEmpty())
		throw EmptyQueue();
	else
	{
		NodeType* tempPtr;
		tempPtr = front;
		item = front->info;
		front = front->next;
		if (front == NULL)
			rear = NULL;
		delete tempPtr;
	}
}