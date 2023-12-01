#include<iostream>
using namespace std;

int main(){
    int integer;
    int x = 0;
    int y = 0;
    while(integer != 0){
        cout << "Enter an integer: ";
        cin >> integer;
        if(integer%2 == 0 and integer != 0){
            x = x+1;
        }
        else if(integer != 0){
            y = y+1;
        }

    }
    cout << "#Even numbers = " << x << "\n";
    cout << "#Odd numbers = " << y;


    return 0;
} 
