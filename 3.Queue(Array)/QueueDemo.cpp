#include"Queue.cpp"

int main(){
	char stat;
	cout<<"Do you want to create Queue(y/n):";
	cin>>stat;
	while(stat=='y'){
		cout<<"Enter the datatype of queue to be created?"<<endl;
		string op;
		cin>>op;
		if(op=="int"){
			int el,n,pos;
			char choice;
			Queue<int> q1;
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Choose the actions to perform:"<<endl;
				cout<<"1.Enqueue \n2.Dequeue"<<endl;
				int opt;
				cin>>opt;
				if(opt==1){
					cout<<"Enter number of elements to enqueue:";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element to enqueue:";
						cin>>el;
						q1.Enqueue(el);
						q1.display();
					}
				}
				if(opt==2){

						q1.Dequeue();
						q1.display();
					
				}
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;
			}
		}
		if(op=="char"){
			int n,pos;
			char el,choice;
			Queue<char> q1;
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Choose the actions to perform:"<<endl;
				cout<<"1.Enqueue \n2.Dequeue"<<endl;
				int opt;
				cin>>opt;
				if(opt==1){
					cout<<"Enter number of elements to enqueue:";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element to enqueue:";
						cin>>el;
						q1.Enqueue(el);
						q1.display();
				   }
				}
				if(opt==2){						
						q1.Dequeue();
						q1.display();
					
				}
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;
			}
		}
		if(op=="float"){
			int n,pos;
			char choice;
			float el;
			Queue<float> q1;
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Choose the actions to perform:"<<endl;
				cout<<"1.Enqueue \n2.Dequeue"<<endl;
				int opt;
				cin>>opt;
				if(opt==1){
					cout<<"Enter number of elements to enqueue:";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element to enqueue:";
						cin>>el;
						q1.Enqueue(el);
						q1.display();
					}
				}				
				if(opt==2){
						q1.Dequeue();
						q1.display();					
				}
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;
			}
		}
		cout<<"Do you want to continue creating array?(y/n):";
		cin>>stat;
	}
}
	return 0;	
}
