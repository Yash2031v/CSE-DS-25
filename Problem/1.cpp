//wap to input a 1-d array and also input one target print yes if there exist a pair in array whose sum = target other wise no 

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==key){
                count++;
            }
            
        }
    }
    if(count!=0){
        cout<<"Yes";
    }
    else{
        cout<<"no";
    }
    
}