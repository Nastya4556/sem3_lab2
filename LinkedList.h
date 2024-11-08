#pragma once

#include <iostream>
#include <stdexcept>
#include "Sequence.h"

template <typename T> class LinkedList :public Sequence<T>
{
public:
	class Element
	{
	public:
		T element{};
		Element* next{};
		Element() : next(nullptr) {}
		Element(T element) : next(nullptr), element(element) {}
	};
private:
	Element* head = nullptr;
	Element* tail = nullptr;
	int size = 0;

	Element& getElement(int index) const
	{
		if (index < 0 || index >= size) throw std::out_of_range("Index is out of range");
		Element* current = this->head;
		for (int i = 0; i < index; i++)
		{
			current = current->next;
		}
		return *current;
	}

	void deleteList()
	{
		Element* current = this->head;
		while (current != 0)
		{
			current = current->next;
			delete this->head;
			this->head = current;
		}
		delete this->head;
	}
public:
	LinkedList(const T* other, int size)
	{
		if (size < 0) throw std::out_of_range("Invalid size\n");
		for (int i = 0; i < size; i++)
		{
			this->append(other[i]);
		}
	}
	LinkedList()
	{

	}
	LinkedList(const LinkedList<T>& other)
	{
		for (Element* current = other.head; current != nullptr; current = current->next) {
			this->append(current->element);
		}
	}
	LinkedList(int size)
	{
		if (size < 0) throw std::out_of_range("Size is invalid\n");
		if (size > 0)
		{
			head = new Element;
			this->tail = this->head;
		}
		for (int i = 0; i < size; i++)
		{
			this->tail->next = new Element;
			this->tail = this->tail->next;
		}
		this->size = size;
	}
	~LinkedList()
	{
		deleteList();
	}
	T getFirst() const
	{
		if (this->head == NULL || this->size < 0) throw std::out_of_range("The list is empty\n");
		Element* current = this->head;
		return current->element;
	}
	T getLast() const
	{
		if (this->head == NULL || this->size < 0) throw std::out_of_range("The list is empty\n");
		Element* current = this->tail;
		return current->element;
	}
	T& operator[](int index) {
		return getElement(index).element;
	}
	const T& operator[](int index) const {
		return getElement(index).element;
	}
	T& get(int index) const
	{
		if (this->head == NULL || this->size < 0) throw std::out_of_range("The list is empty\n");
		return const_cast<T&>((const_cast<LinkedList<T>&>(*this))[index]);
	}
	LinkedList<T>* getSublist(int startIndex, int endIndex)
	{
		if (this->size < 0 || endIndex < 0 || startIndex < 0 || endIndex >= this->size || startIndex >= this->size || startIndex > endIndex) throw std::out_of_range("Index out of range\n");
		LinkedList<T>* newList = new LinkedList<T>;
		Element* current = &getElement(startIndex);
		for (int i = startIndex; i <= endIndex; i++)
		{
			newList->append(current->element);
			current = current->next;
		}
		return newList;
	}
	void append(const T& item)
	{
		if (this->size == 0)
		{
			this->head = new Element(item);
			this->tail = this->head;
			this->size += 1;
		}
		else
		{
			this->tail->next = new Element(item);
			this->tail = this->tail->next;
			this->size += 1;
		}
	}
	void prepend(const T& item)
	{
		if (this->size == 0)
		{
			this->head = new Element(item);
			this->tail = this->head;
		}
		else
		{
			this->size += 1;
			Element* buf = new Element(item);
			buf->next = this->head;
			this->head = buf;
		}
	}

	void insertAt(int index, T item)
	{
		if (index < 0 || index > this->getLength()) throw std::out_of_range("Index is invalid\n");
		if (index == 0)
		{
			this->prepend(item);
		}
		else if (index == this->size)
		{
			this->append(item);
		}
		else
		{
			Element* buf = new Element(item);
			buf->next = &getElement(index);
			getElement(index - 1).next = buf;
			this->size += 1;
		}
	}
	LinkedList<T>* concat(LinkedList<T>* other)
	{
		LinkedList<T>* newList = new LinkedList<T>(*this);
		for (int i = 0; i < other->getLength(); i++)
		{
			newList->append(other->get(i));
		}
		return newList;
	}
	int getLength() const
	{
		if (this->size < 0) throw std::out_of_range("Size is invalid");
		return this->size;
	}
	void set(int index, const T& value)
	{
		if (index < 0 || index > this->getLength()) throw std::out_of_range("Index is invalid\n");
		(*this)[index] = value;
	}

};