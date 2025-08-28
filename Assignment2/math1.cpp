#include <iostream>
#include <math.h>
using namespace std;

int main (){
    float x, y;
    cout << "enter x: ";
    cin >> x;
    y = cos (x) + 2.8 + fabs (x+2) + log (fabs (3*x+2)); // cos -> cosine, fabs -> absolute value, log -> natural logarithm
    cout << "y = " << y << endl;

    return 0;
}