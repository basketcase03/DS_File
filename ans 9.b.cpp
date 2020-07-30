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
			node->ptr=NULL;
			
			if(head==NULL){
			
			head=node;
			return;}
			
			
			else{
				Node *cur_ptr=head;
				while(cur_ptr->ptr!=NULL)
				cur_ptr=cur_ptr->ptr;
				
				cur_ptr->ptr=node;
			}
			
			
			
		
		
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


class Queue{
	LinkedList l1;
	int size;
	int cur;
	
	public :
	Queue(int n){
		CreateList(&l1);
		size=n;
		cur=0;
		
	}
	
	void Enqueue(int val){
		if(cur==size){
			cout<<"Queue is full!";
			return;
		}
		l1.Add_Node(val);
		cur++;
		
	}
	
	void Dequeue(){
		if(cur==0){
			cout<<"Queue is empty!";
			return;
		}
		int val=l1.Delete_Node();
		cout<<"Removed : "<<val<<endl;
		cur--;
	}
};


int main(){
	cout<<"Enter max. size of queue: ";
	int n;
	cin>>n;
	Queue Q1(n);
	while(1){
		cout<<"1: Enqueue, 2: Dequeue, 3: exit";
		int option;
		cin>>option;
		
		if(option==3)
		break;
		
		else if(option==1){
			int val;
			cin>>val;
			Q1.Enqueue(val);
		}
		else{
			Q1.Dequeue();
		}
	}
}
