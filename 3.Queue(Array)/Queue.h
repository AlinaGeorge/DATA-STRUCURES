#include<iostream>
using namespace std;
template<class T>
class Queue{
		T q[100];
		int front;
		int rear;
		int size;
	public:
		Queue();
		void Enqueue(T);
		void Dequeue();
		bool isFull();
		bool isEmpty();
		void underflow();
		void overflow();
		void RollBack();
		void display();
};
