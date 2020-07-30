#include<iostream>
using namespace std;

void Insert(int *&arr,int *size, int *occupied){
	cout<<"Enter element to insert ";
	int element;
	cin>>element;
	
	cout<<"Enter position to insert in ";
	int pos;
	cin>>pos;
	
	
	// Check if postion is valid
	if(pos>*occupied+1){
		cout<<" Invalid position !";
		return;
	}
	
	*occupied=*occupied+1;
	
	//If new array is greater than current array, double the size of array
	if(*occupied>*size){
		int new_size=2*(*size);
		int *new_arr= new int[new_size];
		
		copy(arr,arr+*occupied,new_arr);
		delete [] arr;
		arr=new_arr;
		*size=2*(*size);
		
    }
	
	//Insertion
	for(int i=*occupied-1;i>pos;i--){
		arr[i]=arr[i-1];
    }
    
    arr[pos]=element;
    
    
    	
}


void Delete(int *&arr, int *capacity){
	
	// Check if value can be deleted
	if(*capacity==0){
		cout<<" No element can be deleted! Array is empty!";
		return;
	}
	cout<<" Enter the position of element to be deleted: ";
	int pos;
	cin>>pos;
	
	if(pos>*capacity-1){
		cout<<" Invalid Position!";
		return;
	}
	
	//Deletion
	
	*capacity=*capacity-1;
	for(int i=pos;i<=*capacity;i++)
	arr[i]=arr[i+1];
}

int main(){
	cout<<"Enter initial size of array : ";
	int size;
	cin>>size;
	int *arr = new int[size];
	
	cout<<"Enter the elements of array : ";
	
	for(int i=0;i<size;i++)
	cin>>arr[i];
	
	int occupied=size;
	
	while(1){
		cout<<"Enter "<<endl<<"1: Insert"<<endl<<"2: Delete"<<endl<<"3: Exit"<<endl;
		int option;
		cin>>option;
		
		if(option==3)
		break;
		
		else if(option==1){
			Insert(arr,&size,&occupied);
		}
		else{
			Delete(arr,&occupied);
		}
		cout<<endl<<" New array : ";
		
		for(int i=0;i<occupied;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
