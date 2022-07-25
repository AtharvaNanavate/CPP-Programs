#include<iostream>
using namespace std;

int main(){

    int n, m;
    cout << "Enter the number of rows in your array : ";
    cin >> n;
    cout << "Enter the number of columns in your array : ";
    cin >> m;

    //input
    int arr[n][m];
    cout << "Enter the elements row-wise : " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        cin >> arr[i][j];
        }
    }

    //search
    int key, flag = 0;
    cout << "Enter the number to be searched : ";
    cin >> key;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == key){
                cout << "Number Found!";
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0){
        cout << "Number Not Found!";
    }

    return 0;
}