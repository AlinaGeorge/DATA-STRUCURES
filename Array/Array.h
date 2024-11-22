#include<iostream>
using namespace std;
template <class T>
class Array{
		int LB,UB;
		T A[100];
	public:
		Array();
		int getUB();
		int getLB();
		void insert_at_end(T);
		void insert_at_beg(T);
		void insert_at_index(T,int);
		void del_at_end();
		void del_at_beg();
		void del_at_index(int);
		void quick_sort(int,int);
		int partition(int,int);
		void swap(int,int);
		void display();
		
		void clockRotate(int);
		void antiRotate(int);
		void freq();
		void printDistinct();
};
