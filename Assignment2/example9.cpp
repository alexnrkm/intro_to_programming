#include <iostream>
#include <math.h>
using namespace std;

int main(){
    
    float x, y;
    double e = 2.71828182;

    cout << "enter x: ";
    cin >> x;

    y = sqrt(pow(e, 3*x) + 7) + cos (pow(x, 5)) + log(fabs(3*x + 7));
    cout << "y = " << y;

    return 0;
}