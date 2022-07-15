#include<iostream>
#include<cmath>
using namespace std;

void binaryToDecimal(int n){

    int num = n, count = 0,decimal = 0, lastDigit;

    while(num > 0){
        num /= 10;
        count++;
    }

    for(int i = 0; i < count; i++){
        lastDigit = n % 10;
        decimal += pow(2,i) * lastDigit;
        n /= 10;
    }

    cout << "The decimal representation of the given binary number is " << decimal;
}

int main(){

    int n;
    cin >> n;

    binaryToDecimal(n);    
    return 0;
}
