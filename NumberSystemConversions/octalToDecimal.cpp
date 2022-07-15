#include<iostream>
#include<cmath>
using namespace std;

void octalToDecimal(int n){

    int num = n, count = 0,decimal = 0, lastDigit;

    while(num > 0){
        num /= 10;
        count++;
    }

    for(int i = 0; i < count; i++){
        lastDigit = n % 10;
        decimal += pow(8,i) * lastDigit;
        n /= 10;
    }

    cout << "The decimal representation of the given octal number is " << decimal;
}

int main(){

    int n;
    cin >> n;

    octalToDecimal(n);    
    return 0;
}