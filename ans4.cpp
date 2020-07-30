#include<iostream>
using namespace std;

int RecurBSearch(int arr[],int left, int right,int element){
	if(left>right){
		return -1;
	}
	else{
		int mid;
		mid=(left+right)/2;
		if(arr[mid]==element){
			return mid;
		}
		else if(arr[mid]>element){
			RecurBSearch(arr,left,mid-1,element);
		}
		else{
			RecurBSearch(arr,mid+1,right,element);
		}
	}
}

int BinarySearch(int arr[],int n,int element){
	int left=0;
	int right=n-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(arr[mid]==element)
		return mid;
		
		if(arr[mid]<=element){
			left=mid+1;
			continue;
		}
		else{
			right=mid-1;
			continue;
		}
	}
	return -1;
}

int main(){
	cout<<"Enter size of array : ";
	int n;
	cin>>n;
	int arr[n];
	
	cout<<"Enter elements of array : ";
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	cout<<"Element to be searched: ";
	int element;
	cin>>element;
	
	int ans=BinarySearch(arr,n,element);
	cout<<"Ans of Binary Search is index : "<<ans<<endl;
	
	ans=RecurBSearch(arr,0,n-1,element);
	cout<<"Ans of Recursive Binary Search is index : "<<ans<<endl;
}
