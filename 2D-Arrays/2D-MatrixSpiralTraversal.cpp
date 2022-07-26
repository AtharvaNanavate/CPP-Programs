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

    int start_row = 0, end_row = n-1, start_col = 0, end_col = m-1;
        cout << "Spiral Traversal : ";
        while(start_col <= end_col && start_row <= end_row){

            if(start_col <= end_col && start_row <= end_row){
                for(int j = start_col; j <= end_col; j++){
                    cout << arr[start_row][j] << " ";
                }
                start_row++;
            }

            if(start_col <= end_col && start_row <= end_row){
                for(int j = start_row; j <= end_row; j++){
                    cout << arr[j][end_col] << " ";
                }
                end_col--;
            }

            if(start_col <= end_col && start_row <= end_row){
                for(int j = end_col; j >= start_col; j--){
                    cout << arr[end_row][j] << " ";
                }
                end_row--;
            }

            if(start_col <= end_col && start_row <= end_row){
                for(int j = end_row; j >= start_row; j--){
                    cout << arr[j][start_col] << " ";
                }
                start_col++;
            }
        }
            
        
    return 0;
}