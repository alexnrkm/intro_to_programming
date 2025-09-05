#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b;
    cout << "enter a number: ";
    cin >> a;
    b = a % 2;
    if (b == 0){
        cout << "the number is even";
    }
    else{
        cout << "the number is odd";
    }

    return 0;
}