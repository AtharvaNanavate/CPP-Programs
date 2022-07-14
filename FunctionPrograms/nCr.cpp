#include<iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        int fact=1;
        for(int i = 1; i <= n; i++){
            fact *= i;
        }
    return fact;
    }
}

void calc_nCr(int n, int r){

    int nCr = factorial(n)/(factorial(n-r)*factorial(r));
    cout << nCr;
}

int main(){

    int n,r;
    cin >> n >> r;

    calc_nCr(n,r);
    return 0;
}