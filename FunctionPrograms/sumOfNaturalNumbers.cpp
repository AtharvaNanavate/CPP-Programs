#include<iostream>
using namespace std;

void sum(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << "The sum is " << sum;
}

int main(){

    int n;
    cin >> n;

    sum(n);
    return 0;
}