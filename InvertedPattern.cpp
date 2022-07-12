#include<iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = n; i >= 1; i--){
        int k=1;
        for(int j = n; j > n-i; j--,k++){
            cout << k << ' ';
        }
        cout << endl;
    }
    return 0;
}