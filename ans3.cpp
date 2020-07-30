#include<iostream>
using namespace std;

void FlagBubbleSort(int arr[], int n){
	int rounds=n-1;
	int total_loops=0;
	for(int i=0;i<rounds;i++){
		int swaps=0;
		for(int j=0;j<rounds-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
				swaps++;
			}
		}
		if(swaps==0)
		return;
	}
}

void BubbleSort(int arr[], int n){
	int rounds=n-1;
	for(int i=0;i<rounds;i++){
		for(int j=0;j<rounds-i;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
			
		}
	}
}

int main(){
	cout<<"Enter size of array : ";
	int n;
	cin>>n;
	int arr[n];
	
	cout<<"Enter elements of array : ";
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	BubbleSort(arr,n);
	cout<<"Sorted array : "<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	
	//Modified Bubble Sort
	cout<<"Enter size of array : ";
	int n2;
	cin>>n2;
	int arr2[n2];
	
	cout<<"Enter elements of array : ";
	
	for(int i=0;i<n2;i++)
	cin>>arr2[i];
	
	FlagBubbleSort(arr2,n2);
	cout<<"Sorted array : "<<endl;
	for(int i=0;i<n2;i++)
	cout<<arr2[i]<<" ";
	cout<<endl;
	
	
}
