#include "custom_list.h"

List::List()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

List::~List()
{
}

void List::AddElement(int value, int index, int* arr)
{
	if (head == nullptr)
	{
		head = new Node(value, index);
		tail = head;
		arr[value] = tail->index2 = head->index2 = index;
		size++;
		return;
	}

	tail->next = new Node(value, index);
	tail->next->index2 = index;
	tail->next->prev = tail;
	tail->next->prev->index2 = tail->index2;
	tail = tail->next;
	arr[value] = tail->index2 = tail->next->index2;
	size++;
}

void List::RemoveElement()
{
}

void List::GetByIndex(int index, int* arr)
{
	int i = index;
	std::cout << arr[i] << endl;

}