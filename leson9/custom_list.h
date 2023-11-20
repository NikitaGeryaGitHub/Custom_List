#pragma once
struct Node 
{
	Node(int value)
	{
		this->value = value;
		next = prev = nullptr;
	}

	int value;
	Node* next;
	Node* prev;

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

	void AddElement(int value);
	void RemoveElement(int index);
	int GetByIndex(int index);
};