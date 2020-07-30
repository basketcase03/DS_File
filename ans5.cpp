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
	
	void Delete_Node(){
		if(head==NULL){
			cout<<"Empty!";
			return;
		}
		Node *del_node=head;
		head=head->ptr;
		delete del_node;
	}
	
	void Show_List(){
		cout<<endl<<"List is : ";
		Node *cur_ptr;
		cur_ptr=head;
		while(cur_ptr!=NULL){
			cout<<cur_ptr->val<<" ";
			cur_ptr=cur_ptr->ptr;

		}
		cout<<endl;
		
	}
};

void CreateList(LinkedList *l1){
	l1->head=NULL;
}


int main(){
	LinkedList list1;
	CreateList(&list1);
	while(1){
		cout<<"Enter 1: Insert, 2: Delete, 3:exit"<<endl;
		int option;
		cin>>option;
		
		if(option==3)
		break;
		
		else if(option==1){
			int val;
			cin>>val;
			list1.Add_Node(val);
			list1.Show_List();
		}
		else{
			list1.Delete_Node();
			list1.Show_List();
		}
	}
	
}
