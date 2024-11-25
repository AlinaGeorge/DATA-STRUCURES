#include<iostream>
using namespace std;
template<class T>
class Deque{
	private:
		int front,back,size;
		T* Q;
	public:
		Deque(int);
		bool is_full();
		bool is_empty();
		void insert_front(T);
		void insert_back(T);
		void pop_front();
		void pop_back();
		void display();
};
