/* Problem : Find the subarray in an array which has maximum sum. Print the sum as output.
*/

#include<bits/stdc++.h>
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

    //kadane's algorithm
    int sum[n], maximum = -99999999;
    sum[0] = arr[0];
    
    if(arr[0] < 0){
        sum[0] = 0;
    }

    for(int i = 1; i < n; i++){
        sum[i] = sum[i-1] + arr[i];
        if(sum[i] < 0){
            sum[i] = 0;
        }
        maximum = max(sum[i],maximum);
    }

    cout << "The maximum sum of subarray is " << maximum << endl;
    return 0;
}