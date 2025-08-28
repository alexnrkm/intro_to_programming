#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x, y;
    float e = 2.718281;
    float pi = 3.141592;

    cout << "enter x: ";
    cin >> x;

    y = sqrt(pow(e, 2)) - fabs(sin(pi*x/(x+2/3))) + 1,7; // pow (y, x) = y в степени x
    cout << y;

    return 0;
}