#include <iostream>
#include <math.h>
using namespace std;

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
    y = pow(pow(e, 3 * x) + 7, 1.0/4.0) + cos(pow(x,5)) + log(fabs(3 * x + 7));

    return y;
}