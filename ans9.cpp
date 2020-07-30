#include<iostream>
using namespace std;
const int Nmax=101;

class Queue{
	int arr[Nmax];
	int size;
	int first;
	int last;
	int cur;
	
	public:
		Queue(int n){
			size=n;
			first=-1;
			last=-1;
			cur=0;
		}
		void Enqueue(int val){
			if(cur==size){
				cout<<"Queue is full!";
				return;
			}
			if(cur==0){
				first=0;
				last=0;
				arr[last]=val;
			}
			
			else{
				last++;
				last=last%size;
				arr[last]=val;
				
			}
			cur++;
		}
		
		void Dequeue(){
			if(cur==0){
				cout<<"Queue is empty! ";
				return;
			}
			int ans=arr[first];
			first++;
			first=first%size;
			cout<<" Removed "<<ans<<endl;
			
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
