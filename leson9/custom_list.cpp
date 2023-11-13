#include "custom_list.h"

List::List()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

void List::AddElement(int value)
{
	if (head == nullptr)
	{
		head = new Node(value);
		tail = head;
		return;
	}

	tail->next = new Node(value);
	tail->next->prev = tail;
	tail = tail->next;
	size++;
}