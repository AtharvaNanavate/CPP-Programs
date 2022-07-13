#include<iostream>
using namespace std;

int main(){
    int n,add=0;
    cin >> n;

    int num = n;

    while(n>0){
        add += ((n%10)*(n%10)*(n%10));
        n=n/10;
    }

    if(add == num){
        cout << "Armstrong Number";
    }

    else{
        cout << "Not an Armstrong Number";
    }
    
    return 0;
}