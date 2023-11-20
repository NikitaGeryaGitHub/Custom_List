#pragma once
struct Node 
{
	Node(int value, int index1)
	{
		this->index1 = index1;
		this->value = value;
		next = prev = nullptr;
	}

	int index1;
	int value;
	Node* next;
	Node* prev;
	Node* index2;
};

class List
{
private:

	Node* head;
	Node* tail;
	int size;

public:
	List();
	~List();

	void AddElement(int value, int index2, int* arr);
	void RemoveElement();
	int GetByIndex(int index, int* arr);
};