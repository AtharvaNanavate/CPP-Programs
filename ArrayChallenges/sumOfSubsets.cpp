/*Problem : Given an array a[] of size n. Output sum of each subarray of the given array.*/

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
    
    cout << "Sum of all subsets : " << endl;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum+=arr[j];
            cout << sum << endl;
        }    
    }
    return 0;
}
