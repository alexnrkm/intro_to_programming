#include <iostream>
#include <math.h>
using namespace std;

int main (){
    float x, y;
    cout << "enter x: ";
    cin >> x;

    y = 6*x + pow(x, 3) * log(pow(x, 2));
    cout << "y = " << y;
    return 0;
}