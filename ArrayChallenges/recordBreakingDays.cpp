/* Problem : Isyana is given the number of visitors at her local theme park on N consecutive days. The
number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the
following conditions:
1. The number of visitors on the day is strictly larger than the number of visitors on each
of the previous days.
2. Either it is the last day, or the number of visitors on the day is strictly larger than the
number of visitors on the following day.
Note that the very first day could be a record breaking day!

Please help Isyana find out the number of record breaking days.
*/

#include<bits/stdc++.h>
using namespace std;

bool maxTilli(int arr[], int i){
    int max = arr[i];
    for(int j = 0; j <= i; j++){
        if(arr[j] > max){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cout << "Enter the number of test cases : ";
    cin >> t;
    while (t>0){
        int n;
        cout << "Enter the number of elements in your array : ";
        cin >> n;

        int arr[n+1];
        arr[n] = -1;

        cout << "Enter the elements of your array : ";
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int count = 0;
        for(int i = 0; i < n; i++){
            if(maxTilli(arr,i) && (arr[i+1] < arr[i])){
                count++;
            }
        }
        cout << count << endl;       
        t--;
    }
    
    return 0;
}