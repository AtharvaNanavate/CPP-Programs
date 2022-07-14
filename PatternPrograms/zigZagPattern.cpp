#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int r1 = (n-3)/4;
    int r2 = n/2;
    int r3 = (n-1)/4;

    for(int i = 0; i <= r1; i++){
            if(i == 0){
            cout <<"  *";
            }
            else{
            cout <<"   *";
            }
    }
    cout << endl;
    
    for(int i = 0; i < r2; i++){
        cout <<" *";
    }
    cout << endl;
    for(int i = 0; i <= r3; i++){
        cout <<"*   ";
    }
    cout << endl;
    return 0;
}
