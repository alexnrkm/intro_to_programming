#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b;
    cout << "enter a number: ";
    cin >> a;
    b = a % 3;
    if (b == 0){
        cout << "divisible by 3";
    }
    else{
        cout << "not divisible by 3";
    }

    return 0;
}