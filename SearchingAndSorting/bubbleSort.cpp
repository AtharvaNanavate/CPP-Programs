#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of elements in your array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of your array : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    //bubbleSort
    for(int i = n; i > 1; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}