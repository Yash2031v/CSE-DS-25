#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, key, ptr, temp;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int key=1;key<n;key++){
        temp = arr[key];
        ptr = key-1;
        while(temp < arr[ptr] && ptr>=0){
            arr[ptr+1] = arr[ptr];
            ptr = ptr-1;
        }
        arr[ptr+1]=temp;
        
        
    }
    cout<<"Sorted array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }

}
