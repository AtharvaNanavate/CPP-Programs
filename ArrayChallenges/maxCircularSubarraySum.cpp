/* Problem : Find the subarray in a circular array which has maximum sum. Print the sum as output.
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

    int flag = 0;
    for(int i = 1; i < n; i++){
        sum[i] = sum[i-1] + arr[i];
        if(sum[i] < 0){
            sum[i] = 0;
        }
        if(i == n-1 && flag == 0){
            i = -1;
            flag = 1;
        }
        if(flag = 1 && i >= 0){
            
        }
        
        maximum = max(sum[i],maximum);
    }
    
        if(arr[n-1] > 0 && arr[0] > 0){
            int s = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] < 0){
                    break;
                }
                s += arr[i];
            }
            for(int i = n-1; i >= 0; i--){
                if(arr[i] < 0){
                    break;
                }
                s += arr[i];
            }
           
        maximum = max(s,maximum);
        }

    cout << "The maximum sum of circular subarray is " << maximum << endl;
    return 0;
}
