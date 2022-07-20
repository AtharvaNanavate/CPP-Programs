/* Problem : An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. 
For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. 
She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. 
Please help her to determine the length of the longest contiguous arithmetic subarray.*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cout << "Enter the number of test cases : ";
    cin >> t;
    while (t>0){
        int n;
        cout << "Enter the number of elements in your array : ";
        cin >> n;

        int arr[n];
        cout << "Enter the elements of your array : ";
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int ans = 2;
        int cd = arr[1] - arr[0];
        int j = 2, count = 2;
        while(j < n){
            if(arr[j] - arr[j-1] == cd){
                count++;
            }
            else{
                cd = arr[j] - arr[j-1];
                count = 2;
            }
            ans = max(ans,count);
            j++;
        }
        cout << ans << endl;
        t--;
    }
    
    return 0;
}
