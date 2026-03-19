//WAP to find out the first and last occurence of an elements 
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,index,tar;
    
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target element ";
    cin>>tar;
    for(int i=0;i<n;i++){
        if(tar==arr[i]){
            cout<<i<<endl;
            break;
            
        }
    }
    for(int i=n;i>0;i--){
        if(tar==arr[i]){
            cout<<i<<endl;
            break;
            
        }
    }
    
}
    