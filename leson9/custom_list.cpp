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
				head = head->next;
				delete iterator;
			}

			else if (iterator == tail)
			{
				tail = tail->prev;
				delete iterator;
			}

			else
			{
				iterator->prev->next = iterator->next;
				iterator->next->prev = iterator->prev;
				delete iterator;
				iterator = nullptr;
			}
			break;
		}
		counter++;
		iterator = iterator->next;
	}

	int i = 10;
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

void List::FillRand(int value)
{
	Node* iterator = head;
	int counter = 0;
	while (counter < value)
	{
		iterator->value = rand() % value;
		iterator = iterator->next;
		counter++;
	}
	
}

void List::sort(int value)
{
	Node* iterator = head;
	Node* iterator_next = iterator->next;


	for (int i = 0; i < value; i++)
	{
		for (int j = 0; j + 1 < value; j++)
		{
			if (iterator > iterator_next)
			{
				int ptr = iterator->value;
				iterator->value = iterator_next->value;
				iterator_next->value = ptr;
			}
			iterator_next = iterator_next->next;
		}
		iterator = iterator->next;
	}
}