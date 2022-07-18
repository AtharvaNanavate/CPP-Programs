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
    
    //insertionSort
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i-1;
            while(current < arr[j] && j>=0){
                arr[j+1] = arr[j];
                j--;
            }
        arr[j+1]=current;
    }

    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}