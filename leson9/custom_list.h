#pragma once
class List
{
private:
	int* head;
	int* tail;
	int size;

public:
	List();
	~List();

	void AddElements();
	void RemoveElements();
	int GetByIndex(int index);
};