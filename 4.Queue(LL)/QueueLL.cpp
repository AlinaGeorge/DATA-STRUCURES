#include"QueueLL.h"

template<class T>	
Node<T>::Node(T data){
	this->data=data;
	this->link=NULL;
}

template<class T>
T Node<T>:: getData(){
	return data;
}

template<class T>
Node<T>* Node<T>:: getLink(){
	return link;
}

template<class T>
void Node<T>::setLink(Node<T>* link){
	this->link=link;
}

template<class T>
void Node<T>::setData(T data){
	this->data=data;
}
template<class T>
LinkedQueue<T>::LinkedQueue(){
	head=NULL;
}
template<class T>
void LinkedQueue<T>::EnQueue(T key){
	if(head==NULL){
		Node<T>* node=new Node<T>(key);
		head=node;
	}
	else{
		Node<T>* node=new Node<T>(key);
		node->setData(key);
		Node<T> *p=head;
		while(p->getLink()!=NULL){
			p=p->getLink();
	}
		p->setLink(node);
		node->setLink(NULL);
	}
}
template<class T>
void LinkedQueue<T>::DeQueue(){
	Node<T>* p=head;
	head=head->getLink();
	delete(p);
}
template<class T>
void LinkedQueue<T>::display(){
	Node<T>* t=head;
	while(t!=NULL){
		cout<<t->getData()<<" ";
		t=t->getLink();
	}
	cout<<endl;
}

