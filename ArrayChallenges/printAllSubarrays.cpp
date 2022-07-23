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

    cout << "The following are all the subarrays : " << endl;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
            cout << arr[k];
            }
            cout << endl;
        }    
    }
    
    return 0;
}