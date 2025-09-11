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
    y = fabs(x - 15) + pow(pow(x, 4), 1.0/5.0) + pow(pow(e, 3 * x) + 4, 1.0/3.0);

    return y;
}