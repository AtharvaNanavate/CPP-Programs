#include<bits/stdc++.h>
using namespace std;

void hexadecimalToDecimal(string n){
    int l = n.size();
    int decimal = 0;

    for(int i = l-1; i >= 0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            decimal += (n[i]-'0') * pow(16,l-1-i);
        }

        else if(n[i] >= 'A' && n[i] <= 'F'){
            decimal += (n[i]-'A'+10) * pow(16,l-1-i);
        }
        
    }
    cout << "The decimal number representation of the given hexadecimal number is " << decimal;
}

int main(){
    string n;
    cin >> n;
    
    hexadecimalToDecimal(n);
    return 0;
}