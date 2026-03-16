#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, key;
    cout<<"Enter the number of elements in the array in sorted order : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the key to be searched: ";
    cin>>key;
    int low = 0, high = n-1, mid;
    while(low <= high){
        
        mid = (low + high) / 2;
        if(arr[mid] == key){
            cout<<"Element found at index "<<mid<<endl;
            return 0;
        }else {
            if(arr[mid] < key){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
    }
}