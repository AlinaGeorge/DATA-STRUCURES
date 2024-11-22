#include"Array3.h"

template<class T>
Array<T>::Array(){
	LB=1;
	UB=0;
}
template<class T>
int Array<T>::getUB(){
	return UB;
}
template<class T>
int Array<T>::getLB(){
	return LB;
} 
template<class T>
void Array<T>::insert_at_end(T key){

	UB=UB+1;
	A[UB]=key;
}
template<class T>
void Array<T>::insert_at_beg (T key){
	int k;	
	UB=UB+1;
	k=UB-1;
	while (k>=LB){
		A[k+1]=A[k];
		k=k-1;
	}	
	A[LB]=key;
}
template<class T>
void Array<T>::insert_at_index(T key,int pos){
	int k;
	UB=UB+1;
	k=UB-1;
	while (k>=pos){
		A[k+1]=A[k];
		k=k-1;
	}
	A[pos]=key;
}
template<class T>
void Array<T>::del_at_index(int pos){
	if (LB<=pos and pos<=UB){
		int k;
		k=pos+1;
		while (k<=UB){
			A[k-1]=A[k];
			k=k+1;
		}
		UB=UB-1;
	}
	else{
		cout<<"Out of Bound";
	}
}
template<class T>
void Array<T>::del_at_end(){
	UB=UB-1;
}
template<class T>
void Array<T>::del_at_beg(){
	UB=UB-1;
	int k;
	while (k>=LB){
		A[k-1]=A[k];
	}
}
template <class T>
void Array<T>::swap(int p,int q){
	T temp=A[p];
	A[p]=A[q];
	A[q]=temp;
}
template <class T>
int Array<T>::partition(int LB,int UB){
	int j=LB-1;
	T pivot=A[UB];
	int i=LB;
	while (i<=UB-1){
		if (A[i]<pivot){
			j=j+1;
			swap(i,j);
		}
		i=i+1;
	}
	swap(j+1,UB);
	return j+1;
}
template <class T>
void Array<T>::quick_sort(int LB,int UB){
    if (LB < UB) {
        int p = partition(LB, UB);
        quick_sort(LB,p-1);
        quick_sort(p+1,UB);
    }
}
template<class T>
void Array<T>::clockRotate(int pos){
	for(int i=0;i<pos;i++)
	{
		T temp=A[UB];
		for(int j=UB;j>0;j--)
		{
			A[j]=A[j-1];
		}
		A[LB]=temp;
	}
}
template <class T>
void Array<T>::antiRotate(int pos){
	for(int i=LB;i<=pos;i++)
	{
		T temp=A[LB];
		for(int j=LB;j<=UB;j++)
		{
			A[j]=A[j+1];
		}
		A[UB]=temp;
	}
}
template <class T>
void Array<T>::freq(){
	int i;
	int count=1;
	quick_sort(LB,UB);
	cout<<"Frequency of elements are:"<<endl;
	for (i=LB;i<=UB;i++){
		if (A[i]==A[i+1]){
			count++;
		}
		else{		
			cout<<A[i]<<":"<<count<<endl;	
			count=1;
		}
	}
}
template <class T>
void Array<T>::printDistinct(){
	cout<<"Printing distinct elements only:";
	int i,j;
	for(i=0;i<UB;i++){
		int count=0;					
		for(j=0;j<UB;j++){
			if(A[i]==A[j]){
				count=count+1;
			}
		}
		if(count==1){
			cout<<A[i]<<" ";
		}
	}
	cout<<endl;
}
template<class T>
void Array<T>::display(){
	for(int i=LB;i<=UB;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}
