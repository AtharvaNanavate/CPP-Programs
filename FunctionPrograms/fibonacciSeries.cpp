#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else if(n > 2){
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

void printFibonacciSeries(int n){
    for(int i = 1; i <= n; i++){
        cout << fibonacci(i) << endl;
    }
}

int main(){
    int n;
    cin >> n;

    printFibonacciSeries(n);
    return 0;
}