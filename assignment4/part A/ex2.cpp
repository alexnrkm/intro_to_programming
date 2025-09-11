#include <iostream>
#include <math.h>
using namespace std;

float equation (float x);

int main (){
    float x;
    cout << "enter x: ";
    cin >> x;
    cout << "y = " << equation(x);
}

float equation (float x){
    float y;
    y = tan(5/3 * x) + log(fabs(2 * x + 5)) + 1.8;

    return y;
}