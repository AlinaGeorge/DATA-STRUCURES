#include<iostream>

using namespace std;

template<class T>
class Stack{
		T S[100];
		int top;
		int size;
	public:
		Stack();
		void display();
		bool isEmpty();
		bool isFull();
		void Push(T);
		void Pop();
		T Peek();
		float Status();
};

