#include<iostream>
using namespace std;

void LinearSearch(int arr[],int n,int element){
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			cout<<"Element found at index : "<<i<<endl;
			return;
		}
	}
	cout<<"Element not found!";
}

int main(){
	cout<<"Enter size of array : ";
	int n;
	cin>>n;
	int arr[n];
	
	cout<<"Enter elements of array : ";
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	
	cout<<"Enter element to search : ";
	int element;
	cin>>element;
	
	LinearSearch(arr,n,element);
}
