/*Problem:
Given an array arr[] of size N. The task is to find the first repeating element in the array of
integers, i.e., an element that occurs more than once and whose index of first occurrence is
smallest. Print the smallest index of the repeating element as output.
*/

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

        for(int i = 0; i < n; i++){
            
            for(int j = i+1; j < n; j++){
                if(arr[j] == arr[i]){
                    cout << "The index of first repeating element is "<< i+1 << endl;
                    return 0;
                }
            }    
        }
        cout << "There are no repeating elements." << endl;
    return 0;
}