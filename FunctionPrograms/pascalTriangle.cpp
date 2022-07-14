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

void pascalTriangle(int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            calc_nCr(i,j);
        }
        cout << endl;    
    }

}

int main(){

    int n;
    cin >> n;

    pascalTriangle(n);    
    return 0;
}