/* Problem : Given an array a[] of size n. For every i from 0 to n-1, output max(a[0], a[1],.., a[i]). */

#include<iostream>
using namespace std;

void maxTill(int i, int arr[]){
int max = -9999999;

    for(int k = 0; k <= i; k++){
        if(arr[k] > max){
            max = arr[k];
        }
    }

    cout << "Maximum Number till array element - " << i+1 << " : "<< max << endl;
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
    
    for(int i = 0; i < n; i++){
        maxTill(i,arr);
    }
    
    return 0;
}
