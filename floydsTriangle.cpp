#include<iostream>
using namespace std;

int main(){

    
    int n, num=1;
    cout << "Enter the number of lines(n) for the Floyd's Triangle : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        
        for(int j = 1; j <= i; j++,num++){
            cout << num << ' ';
        }

        cout<<endl;
    }
    return 0;
}