#include<iostream>
using namespace std;

void linearSearch(int key, int arr[], int n){
    bool flag = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            cout << "Found!";
            flag = 1;
        }
    }

    if(flag == 0){
        cout << "Not Found!";
    }
}

int main(){

    int n;
    cout << "Enter the total number of elements in your array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements in your array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the key : ";
    int key;
    cin >> key;

    linearSearch(key, arr, n);
    return 0;
}
