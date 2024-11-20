#include"Array3.cpp"
using namespace std;
int main(){
	char stat;
	cout<<"Do you want to create array(y/n):";
	cin>>stat;
	while(stat=='y'){
		cout<<"Enter the datatype of array to be created?";
		string op;
		cin>>op;
		if(op=="int"){
			int el,ch,n,pos;
			char choice;
			Array<int> myArray;
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Choose the actions to perform:"<<endl;
				cout<<"1.Insert at End \n2.Insert at Beginning \n3.Inserting at specified position"<<endl;
				cout<<"4.Delete at End \n5.Delete at Beginning \n6.Delete at specified position"<<endl;
				cout<<"7.Rotate Clockwise \n8.Rotate Anticlockwise \n9.Count Frequency \n10.Print Distinct Elements"<<endl;
				cin>>ch;
				if(ch==1){
					cout<<"How many elements do you want to insert at end?";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element:";
						cin>>el;			
						myArray.insert_at_end(el);
						cout<<"Inserting at the end:"<<endl;
						myArray.display();
					}
				}
				if(ch==2){
					cout<<"How many elements do you want to insert at beginning?";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element:";
						cin>>el;			
						myArray.insert_at_beg(el);
						cout<<"Inserting at the beginnning:"<<endl;
						myArray.display();
					}
				}
				if(ch==3){					
					cout<<"Enter the element:";
					cin>>el;
					cout<<"Enter the position to insert:";
					cin>>pos;			
					myArray.insert_at_index(el,pos);
					cout<<"Inserting at specified position:"<<endl;
					myArray.display();
				}
				if(ch==4){			
						myArray.del_at_end();
						cout<<"Deleting at the end:"<<endl;
						myArray.display();				
				}
				if(ch==5){			
						myArray.del_at_beg();
						cout<<"Delete at the Beginning:"<<endl;
						myArray.display();
				}
				if(ch==6){
					cout<<"Enter the position to delete:";
					cin>>pos;			
					myArray.del_at_index(pos);
					cout<<"Deleting at specified position:"<<endl;
					myArray.display();					
				}
				if(ch==7){
					cout<<"Enter the position to rotate clockwise:";
					int p;
					cin>>p;
					cout<<"Rotating clockwise with respect to "<<p<<endl;
					myArray.clockRotate(p);
					myArray.display();			
				}
				if(ch==8){
					cout<<"Enter the position to rotate anticlockwise:";
					int p;
					cin>>p;
					cout<<"Rotating clockwise with respect to "<<p<<endl;
					myArray.antiRotate(p);
					myArray.display();			
				}
				if(ch==9){
					cout<<"Printing frequency of elements:"<<endl;
					myArray.freq();			
				}
				if(ch==10){					
					cout<<"Printing distinct elements:"<<endl;
					myArray.printDistinct();
				}
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;
			}
		}
		if(op=="char"){
			int ch,n,pos;
			char choice,el;
			Array<char> myArray;
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Choose the actions to perform:"<<endl;
				cout<<"1.Insert at End \n2.Insert at Beginning \n3.Inserting at specified position"<<endl;
				cout<<"4.Delete at End \n5.Delete at Beginning \n6.Delete at specified position"<<endl;
				cin>>ch;
				if(ch==1){				
					cout<<"How many elements do you want to insert at end?";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element:";
						cin>>el;			
						myArray.insert_at_end(el);
						cout<<"Inserting at the end:"<<endl;
						myArray.display();
					}
				}
				if(ch==2){
					cout<<"How many elements do you want to insert at beginning?";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element:";
						cin>>el;			
						myArray.insert_at_beg(el);
						cout<<"Inserting at the beginnning:"<<endl;
						myArray.display();
					}
				}
				if(ch==3){					
					cout<<"Enter the element:";
					cin>>el;
					cout<<"Enter the position to insert:";
					cin>>pos;			
					myArray.insert_at_index(el,pos);
					cout<<"Inserting at specified position:"<<endl;
					myArray.display();
				}
				if(ch==4){			
						myArray.del_at_end();
						cout<<"Deleting at the end:"<<endl;
						myArray.display();				
				}
				if(ch==5){			
						myArray.del_at_beg();
						cout<<"Delete at the Beginning:"<<endl;
						myArray.display();
				}
				if(ch==6){
					cout<<"Enter the position to delete";
					cin>>pos;			
					myArray.del_at_index(pos);
					cout<<"Deleting at specified position:"<<endl;
					myArray.display();					
				}
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;
			}
		}
		if(op=="float"){
			int ch,n,pos;
			char choice;
			float el;
			Array<float> myArray;
			cout<<"Start operations(y/n)?:";
			cin>>choice;
			while(choice=='y'){
				cout<<"Choose the actions to perform:"<<endl;
				cout<<"1.Insert at End \n2.Insert at Beginning \n3.Inserting at specified position"<<endl;
				cout<<"4.Delete at End \n5.Delete at Beginning \n6.Delete at specified position"<<endl;
				cin>>ch;
				if(ch==1){
					cout<<"How many elements do you want to insert at end?";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element:";
						cin>>el;			
						myArray.insert_at_end(el);
						cout<<"Inserting at the end:"<<endl;
						myArray.display();
					}
				}
				if(ch==2){
					cout<<"How many elements do you want to insert at beginning?";
					cin>>n;
					for(int i=0;i<n;i++){
						cout<<"Enter the element:";
						cin>>el;			
						myArray.insert_at_beg(el);
						cout<<"Inserting at the beginnning:"<<endl;
						myArray.display();
					}
				}
				if(ch==3){					
					cout<<"Enter the element:";
					cin>>el;
					cout<<"Enter the position to insert:";
					cin>>pos;			
					myArray.insert_at_index(el,pos);
					cout<<"Inserting at specified position:"<<endl;
					myArray.display();
				}
				if(ch==4){			
						myArray.del_at_end();
						cout<<"Deleting at the end:"<<endl;
						myArray.display();				
				}
				if(ch==5){			
						myArray.del_at_beg();
						cout<<"Delete at the Beginning:"<<endl;
						myArray.display();
				}
				if(ch==6){
					cout<<"Enter the position to delete";
					cin>>pos;			
					myArray.del_at_index(pos);
					cout<<"Deleting at specified position:"<<endl;
					myArray.display();					
				}
				cout<<"Do you want to continue with operations(y/n):";
				cin>>choice;

			}
		}
		cout<<"Do you want to continue creating array(y/n):";
		cin>>stat;
	}
	
	return 0;
}
