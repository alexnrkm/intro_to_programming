#include <iostream>
#include <math.h>
using namespace std;

float equation (float x);

float pi = 3.14159;

int main (){
    float r;
    cout << "enter r: ";
    cin >> r;
    cout << "Area of circle = " << equation(r);
}

float equation (float r){
    float y;
    y = pi * pow(r, 2);

    return y;
}