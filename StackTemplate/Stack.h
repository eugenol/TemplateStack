#ifndef STACK_H
#define STACK_H

#include "Node.h"

template<class T>
class Stack
{
private:
	Node<T> *m_head;
public:
	Stack();
	~Stack();

	void Push(T data);
	T Peek();
	T Pop();
	bool isEmpty();
};

template<class T>
Stack<T>::Stack()
{
	m_head = NULL;
}

template<class T>
Stack<T>::~Stack()
{
	while (m_head != NULL)
	{
		Node<T> *tempPtr;
		tempPtr = m_head;
		m_head = tempPtr->getPrev();
		delete tempPtr;
	}
}

template<class T>
void Stack<T>::Push(T data)
{
	Node<T> *tempPtr = new Node<T>(data, m_head);
	m_head = tempPtr;
}

template<class T>
T Stack<T>::Peek()
{
	if (isEmpty())
		throw "Cant cant peek at an empty stack";

	return m_head->getData();
}

template<class T>
T Stack<T>::Pop()
{
	if (isEmpty())
		throw "Cant pop from an empty stack";

	Node<T> *tempPtr;
	T tempData;
	tempPtr = m_head;
	m_head = tempPtr->getPrev();
	tempData = tempPtr->getData();
	delete tempPtr;
	return tempData;
}

template<class T>
bool Stack<T>::isEmpty()
{
	if (m_head)
		return false;
	else
		return true;
}
#endif
