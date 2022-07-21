/* Problem : Given an unsorted array A of size N of non-negative integers, find a continuous subarray
which adds to a given number S. Print the start index and end index of the subarray as output.
*/

#include<iostream>
using namespace std;

int main(){

        int n;
        cout << "Enter the number of elements in your array : ";
        cin >> n;
        
        int sum;
        cout << "Enter the sum of the subarray : ";
        cin >> sum;

        int arr[n];
        cout << "Enter the elements of your array : ";
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        cout << "The subarray : " << endl;
        int flag = 0;
        for(int i = 0; i < n; i++){
            int s = 0;
            for(int j = i; j < n; j++){
                s += arr[j];
                if(s == sum){
                    cout << i+1 << " -> " << j+1 << endl;
                    flag = 1;
                    break;
                }
            }    
        }
        if(flag == 0){
            cout << "There are no subarrays having the given sum." << endl;
        }

    return 0;
}