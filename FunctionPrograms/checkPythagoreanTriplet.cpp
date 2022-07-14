#include<iostream>
using namespace std;

bool check(int x, int y, int z){
    
int a,b;
int max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);

    if(max == x){
        a=y;
        b=z;
    }
    else if(max == y){
        a=x;
        b=z;
    }
    else if(max == z){
        a=x;
        b=y;
    }

    if(max*max == a*a + b*b){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    if(check(a,b,c)){
        cout << "Pythagorean Triplet";
    }
    else{
        cout << "Not a Pythagorean Triplet";
    }
    return 0;
}