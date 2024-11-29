#include"stack.h"

template<class T>
Stack<T>::Stack(){
	top=-1;
	size=100;
}

template<class T>
void Stack<T>::display(){
	for(int i=top;i>=0;i--){
		cout<<S[i]<<" ";
	}
	cout<<endl;
}
				

template<class T>
bool Stack<T>::isEmpty(){
	if(top==-1){
		return true;
	}
	return false;
}

template<class T>
bool Stack<T>::isFull(){
	if(top==size){
		return true;
	}
	return false;
}

template<class T>
void Stack<T>::Push(T x){	
	if(isFull()!=true){
		top++;
		S[top]=x;
	}
	else{
		cout<<"Stack Overflow"<<endl;
	}
}

template<class T>
void Stack<T>::Pop(){
	if(isEmpty()!=true){
		top--;
	}
	else{
		cout<<"Stack Underflow"<<endl;
	}
}

template<class T>
T Stack<T>::Peek(){
	if(isEmpty()!=true){
		return S[top];
	}
	else{
		return -1;
	}
}

template<class T>
float Stack<T>::Status(){
	return static_cast<float>(top+1)/static_cast<float>(size)*100;
}

