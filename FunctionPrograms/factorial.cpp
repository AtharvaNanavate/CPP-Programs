#include<iostream>
using namespace std;

void factorial(int n){
    if(n == 0 || n == 1){
        cout << 1;
    }
    else{
        int fact=1;
        for(int i = 1; i <= n; i++){
            fact *= i;
        }
    cout << fact;
    }
}

int main(){
    
    int n;
    cin >> n;

    factorial(n);
    return 0;
}