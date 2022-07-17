#include<iostream>
using namespace std;

int binarySearch(int key, int arr[], int n, int s, int e){

    int mid = (s+e)/2;
if(s <= e){
        if( arr[mid] == key){
            return 1;
        }

        else if(key > arr[mid]){
            
            return binarySearch(key, arr, n, mid+1, e);
        }

        else if(key < arr[mid]){
            
            return binarySearch(key, arr, n, s, mid-1);
        }
    }
else{
        return -1;
    }
}

int main(){

    int n;
    cout << "Enter the number of elements in your array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of your array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int res = binarySearch(key, arr, n, 0, n-1);

    if(res == 1){
        cout << "Found!";
    }
    else{
        cout << "Not Found!";
    }
    
    return 0;
}