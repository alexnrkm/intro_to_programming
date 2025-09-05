#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c, S, A ;
    cout << "enter the first side: ";
    cin >> a;
    cout << "enter the second side: ";
    cin >> b;
    cout << "enter the third side: ";
    cin >> c;

    S = (a + b + c)/2;
    A = sqrt(S* (S - a)*(S - b) * (S - c));
    cout << "Area of triangle = " << A << endl;

    return 0;
}