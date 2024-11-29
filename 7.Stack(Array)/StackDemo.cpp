#include"stack.cpp"

int main(){
	Stack<int> st;
	cout<<"How many values do you want to push?"<<endl;
	int n;
	cin>>n;
	char opt;
	for(int i=0;i<n;i++){
		cout<<"Do you want to pop it?";
		cin>>opt;
		if(opt=='y'){
			st.Pop();
		}
		cout<<"Enter the value:";
		int val;
		cin>>val;
		st.Push(val);
	}
	st.display();
	cout<<"Do you want to pop it?";
		cin>>opt;
		if(opt=='y'){
			st.Pop();
		}
	st.display();	
	cout<<"Peak Element:"<<st.Peek()<<endl;
	cout<<"Stack Status="<<st.Status()<<"%"<<endl;
	return 0;
}

