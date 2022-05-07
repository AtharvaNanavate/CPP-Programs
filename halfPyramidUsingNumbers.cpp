#include<iostream>
using namespace std;

int main(){

    int n, num=1;
    cout << "Enter the number of lines(n) for the Half Pyramid using Numbers : ";
    cin >> n;

    for(int i = 1; i <= n; i++,num++){
        
        for(int j = 1; j <= num; j++){
            cout<<num;
        }

        cout<<endl;
    }
    return 0;
}