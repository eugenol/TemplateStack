#ifndef NODE_H
#define NODE_H

template<class T>
class Node
{
private:
	T m_data;
	Node<T> *m_prev;
public:
	Node(T data, Node *prev);
	~Node();

	Node<T> *getPrev();
	T getData();
};

template<class T>
Node<T>::Node(T data, Node *prev)
{
	m_prev = prev;
	m_data = data;
}

template<class T>
Node<T>::~Node()
{

}

template<class T>
Node<T> *Node<T>::getPrev()
{
	return m_prev;
}

template<class T>
T Node<T>::getData()
{
	return m_data;
}
#endif

