#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, key, count = 0;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array : ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the key to be searched : ";
    cin >> key;
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            cout << "Element found at index : " << i << endl;
            count++;
        }
    }
    if (count == 0){
        cout << "Element not found in the array!!!"<<endl;
    }else{
        cout << "Element found " << count << " times in the array!!!" << endl;
    }
}
