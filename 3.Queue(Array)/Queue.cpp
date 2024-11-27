#include"Queue.h"

template<class T>
Queue<T>::Queue(){
	front=0;
	rear=-1;
	size=100;
}

template<class T>
bool Queue<T>::isEmpty(){
	if(rear==-1){
		return true;
	}
	else{
		return false;
	}
}

template<class T>
bool Queue<T>::isFull(){
	if(rear==size){
		return true;
	}
	else{
		return false;
	}
}

template<class T>
void Queue<T>::display(){
	for(int i=front;i<=rear;i++){
		cout<<q[i]<<" ";
	}
	cout<<endl;
}
template<class T>
void Queue<T>::Enqueue(T x){
	if(rear!=size){
		rear++;
		q[rear]=x;	
	}
	else{
		cout<<"Queue full!"<<endl;
	}
}

template<class T>
void Queue<T>::RollBack(){
	if(front>rear){
		front=0;
		rear=-1;
	}
}

template<class T>
void Queue<T>::Dequeue(){
	if(front<=rear){
		front++;
	}
	else{
		cout<<"Queue Empty!"<<endl;
	}
}
