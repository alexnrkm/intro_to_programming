#include <iostream>
#include <math.h>
using namespace std;

float pi = 3.14159;

float equation (float x);

float e = 2.71828;

int main (){
    float x;
    cout << "enter x: ";
    cin >> x;
    cout << "y = " << equation(x);
}

float equation (float x){
    float y;
    y = pow(x, 5) + log(sqrt(pi + fabs(5 - x)));

    return y;
}