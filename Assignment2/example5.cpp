#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float x, y;
    float pi = 3.141592;

    cout << "enter x: ";
    cin >> x;

    y = pow (x, 5) + log(sqrt(pi + fabs(5 - x)));
    cout << "y = " << y;
}