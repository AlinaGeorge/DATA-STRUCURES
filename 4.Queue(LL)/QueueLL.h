#include<iostream>
#include<ostream>
using namespace std;

template <class T>
class Node{
		T data;
		Node<T>* link;
	public:
		Node(T);
		void setData(T);
		void setLink(Node<T>*);
		T getData();
		Node<T>* getLink();
};
template<class T>
class LinkedQueue{
	Node<T>* head;
	public:
		LinkedQueue();
		void display();
		void EnQueue(T);
		void DeQueue();
};
