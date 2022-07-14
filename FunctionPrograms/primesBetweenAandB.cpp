#include<iostream>
using namespace std;

void primeBetweenAandB(int a, int b){

    for(int i = a; i <= b; i++){

        int flag = 0;
        
            for(int j = 2; j <= i/2; j++){
                if(i % j == 0){
                    flag = 1;
                    break;
                }
            }

            if(flag == 0){
                cout << i << endl;
            }
    }
}
int main(){
    int a,b;
    cin >> a >> b;

    primeBetweenAandB(a,b);   
    return 0;
}
