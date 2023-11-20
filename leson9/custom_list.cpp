#include "custom_list.h"

#include <exception>

List::List()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}

List::~List()
{
	Node* iterator = tail;
	while (tail != nullptr)
	{
		iterator = tail->prev;
		delete tail;
		tail = iterator;
	}
}

void List::AddElement(int value)
{
	if (head == nullptr)
	{
		head = new Node(value);
		tail = head;
		size++;
		return;
	}

	tail->next = new Node(value);
	tail->next->prev = tail;
	tail = tail->next;
	size++;
}

void List::RemoveElement(int index)
{
	int counter = 0;
	Node* iterator = head;

	while (iterator != nullptr)
	{
		if (counter == index)
		{

			if (iterator == head)
			{
				delete iterator;
			}

			if (iterator == tail)
			{
				delete iterator;
			}

			else
			{
				iterator->prev->next = iterator->next;
				iterator->next->prev = iterator->prev;
				delete iterator;
			}
		}
		counter++;
		iterator = head->next;
	}
}

int List::GetByIndex(int index)
{
	int counter = 0;
	Node* iterator = head;
	while (iterator != nullptr)
	{
		if (counter == index)
		{
			return iterator->value;
		}
		counter++;
		iterator = iterator->next;
	}

	throw new std::exception("Index out of the list range");
}