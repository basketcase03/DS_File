#include<iostream>
using namespace std;

const int Nmax=101;

class Stack{
	int top;
	int tot_num;
	int arr[Nmax];
	
	
	public:
		
	Stack(int num){
		top=-1;
		tot_num=num;
	}
		
	void Push(int val){
		
		if(top==tot_num-1){
			cout<<"Stack is full!"<<endl;
			return;
		}
			arr[++top]=val;
	}
	
	void Pop(){
		if(top==-1){
			cout<<"Stack is empty!";
			return;
		}
		cout<<endl<<"Popped : "<<arr[top];
		top--;		
	}
};




int main(){
	cout<<"Enter the size of stack : ";
	int n;
	cin>>n;
	Stack s1(n);
	while(1){
		cout<<endl<<"1: Push, 2: Pop, 3: Exit"<<endl;
		int option;
		cin>>option;
		if(option==3)
		break;
		if(option==1){
			cout<<"Enter val ";
			int val;
			cin>>val;
			s1.Push(val);
		}
		else{
			s1.Pop();
		}
	}
	
}
