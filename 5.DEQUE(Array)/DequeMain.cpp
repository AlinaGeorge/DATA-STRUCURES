#include"Deque.cpp"
using namespace std;
int main(){
	char stat;
	cout<<"Do you want to create a Circular Linked List(y/n):";
	cin>>stat;
	while(stat=='y'){
		cout<<"Enter the datatype of LinkedList to be created?";
		string op;
		cin>>op;
		if(op=="int"){
			int el,opt,n,pos;
			char choice;
			cout<<"Enter size:";
        	int s;
        	cin>>s;
			Deque<int> myqueue(s);
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Enter 1 to insert an element to the front of the queue"<<endl;
    			cout<<"Enter 2 to insert an element to the back of the queue"<<endl;
    			cout<<"Enter 3 to delete an element from the front of the queue"<<endl;
    			cout<<"Enter 4 to delete an element from the back of the queue"<<endl;
    			cout<<"Enter 5 to display the queue"<<endl;
				cin>>opt;
				if (opt==1) {
                    cout<<"inserting an element to the front"<<endl;
                    cout<<"Enter the data:";
                    int data;
                    cin>>data;
                    myqueue.insert_front(data);
                    cout<<endl;
                }
                if (opt==2) {
	                cout<<"inserting an element to the back"<<endl;
	                cout<<"Enter the data:";
	                int data;
	                cin>>data;
	                myqueue.insert_back(data);
	                
	                cout<<endl;
	            }
	            if (opt==3) {
	                cout<<"Deleting an element from the front"<<endl;
	                myqueue.pop_front();
	                cout<<endl;
	            }
	            if (opt==4) {
	                cout<<"Deleting an element from the back"<<endl;
	                myqueue.pop_back();
	                cout<<endl;
	            }
	            if (opt==5) {
	                cout<<"Displaying the queue"<<endl;
	                myqueue.display();
	                cout<<endl;
	            }
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;
			}
		}
		if(op=="char"){
			int opt,n,pos;
			char choice,el;
			cout<<"Enter size:";
        	int s;
        	cin>>s;
			Deque<int> myqueue(s);
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Enter 1 to insert an element to the front of the queue"<<endl;
    cout<<"Enter 2 to insert an element to the back of the queue"<<endl;
    cout<<"Enter 3 to delete an element from the front of the queue"<<endl;
    cout<<"Enter 4 to delete an element from the back of the queue"<<endl;
    cout<<"Enter 5 to display the queue"<<endl;
				cin>>opt;
				if (opt==1) {
                    cout<<"inserting an element to the front"<<endl;
                    cout<<"Enter the data:";
                    int data;
                    cin>>data;
                    myqueue.insert_front(data);
                    cout<<endl;
                }
                if (opt==2) {
	                cout<<"inserting an element to the back"<<endl;
	                cout<<"Enter the data:";
	                int data;
	                cin>>data;
	                myqueue.insert_back(data);
	                
	                cout<<endl;
	            }
	            if (opt==3) {
	                cout<<"Deleting an element from the front"<<endl;
	                myqueue.pop_front();
	                cout<<endl;
	            }
	            if (opt==4) {
	                cout<<"Deleting an element from the back"<<endl;
	                myqueue.pop_back();
	                cout<<endl;
	            }
	            if (opt==5) {
	                cout<<"Displaying the queue"<<endl;
	                myqueue.display();
	                cout<<endl;
	            }
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;
			}
		}
		if(op=="float"){
			int opt,n,pos;
			char choice;
			float el;
			cout<<"Enter size:";
        	int s;
        	cin>>s;
			Deque<int> myqueue(s);
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Enter 1 to insert an element to the front of the queue"<<endl;
    cout<<"Enter 2 to insert an element to the back of the queue"<<endl;
    cout<<"Enter 3 to delete an element from the front of the queue"<<endl;
    cout<<"Enter 4 to delete an element from the back of the queue"<<endl;
    cout<<"Enter 5 to display the queue"<<endl;
				cin>>opt;
				if (opt==1) {
                    cout<<"inserting an element to the front"<<endl;
                    cout<<"Enter the data:";
                    int data;
                    cin>>data;
                    myqueue.insert_front(data);
                    cout<<endl;
                }
                if (opt==2) {
	                cout<<"inserting an element to the back"<<endl;
	                cout<<"Enter the data:";
	                int data;
	                cin>>data;
	                myqueue.insert_back(data);
	                
	                cout<<endl;
	            }
	            if (opt==3) {
	                cout<<"Deleting an element from the front"<<endl;
	                myqueue.pop_front();
	                cout<<endl;
	            }
	            if (opt==4) {
	                cout<<"Deleting an element from the back"<<endl;
	                myqueue.pop_back();
	                cout<<endl;
	            }
	            if (opt==5) {
	                cout<<"Displaying the queue"<<endl;
	                myqueue.display();
	                cout<<endl;
	            }
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;
			}
		}
		cout<<"Do you want to continue creating(y/n):";
		cin>>stat;
	}
	

	return 0;
}
