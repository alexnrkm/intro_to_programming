#include <iostream>
#include <math.h>
using namespace std;

int main (){
    
    float x, y;

    cout << "enter x: ";
    cin >> x;

    y = tan (x) * (5/3) + log(fabs(2 * x + 5)) + 1,8;

    cout << "y = " << y;
    
    return 0;
}