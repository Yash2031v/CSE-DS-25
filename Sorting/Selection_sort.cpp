#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,min,temp;
	cout<<"Enter the size of array : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the element of array : ";
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	for(int i=0;i<n;i++){
	    min=i;
	    for(int j=i+1;j<n;j++){
	        if(arr[min]>arr[j]){
	            min=j;
	        }
	    }
	    temp=arr[min];
	    arr[min]=arr[i];
	    arr[i]=temp;
	   
	}
	cout<<"The sorted array is : ";
	for(int i=0;i<n;i++){
	    cout<<arr[i]<<" ";
	}

}
