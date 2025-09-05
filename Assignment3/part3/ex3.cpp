#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b;
    cout << "enter a number: ";
    cin >> a;
    b = a % 10;
    if (b == 0){
        cout << "the number ends on 0";
    }
    else{
        cout << "the number doesn't end on 0";
    }

    return 0;
}