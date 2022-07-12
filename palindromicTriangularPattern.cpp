#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int k =i+1;

        for(int j = 0; j < n+i; j++){

            if(j < n-i-1){
                cout << ' ';
            }

            else{

                if(j < n){

                    if(k > 1){
                        cout << k;
                        k--;
                    }

                    else if(k == 1){
                        cout << k;
                        k++;
                    }

                }

                else{
                    cout << k;
                    k++;
                }
            }
        }
        cout << endl;
    }   
    return 0;
}