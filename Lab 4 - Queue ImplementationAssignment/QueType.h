//Furkan Yalçýn 20181701039
#pragma once
#include <iostream>
class FullQueue
{};
class EmptyQueue
{};
struct NodeType;
class QueType
{
public:
	QueType(); //Class default constructure
	QueType(int max);
	~QueType(); //Class destructure
	void MakeEmpty(); // provides makeing stake
	bool IsEmpty() const; //checking queue is empty
	bool IsFull() const; // checking queue is full
	void Enqueue(int newItem); // adding new item
	void Dequeue(int& item); // removes front item 

private:
	NodeType* front;
	NodeType* rear;
	
};
struct NodeType {
	int info;
	NodeType* next;
};


