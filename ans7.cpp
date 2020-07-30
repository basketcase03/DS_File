#include<iostream>
using namespace std;

class Node{
	int val;
	Node *ptr;
	friend class LinkedList;
};

class LinkedList{
	Node *head;
	
	friend void CreateList(LinkedList *);
	
	
	public:
	void Add_Node(int val){
			Node* node= new Node;
			node->val=val;
			node->ptr=head;
			head=node;
			
		
		Node *cur_ptr;
		cur_ptr=head;
		
		
	}
	
	int Delete_Node(){
		if(head==NULL){
			cout<<"Empty!";
			return -100;
		}
		Node *del_node=head;
		int ans=head->val;
		head=head->ptr;
		delete del_node;
		return ans;
	}

};

void CreateList(LinkedList *l1){
	l1->head=NULL;
}


class Stack{
	int top;
	int tot_num;
	LinkedList list1;
	
	
	public:
		
	Stack(int num){
		top=-1;
		tot_num=num;
		CreateList(&list1);
	}
		
	void Push(int val){
		
		if(top==tot_num-1){
			cout<<"Stack is full!"<<endl;
			return;
		}
			list1.Add_Node(val);
			top++;
	}
	
	void Pop(){
		if(top==-1){
			cout<<"Stack is empty!";
			return;
		}
		cout<<endl<<"Popped : "<<list1.Delete_Node();
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
