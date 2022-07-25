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

    //print
    cout << "The following is the matrix : " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
        cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}