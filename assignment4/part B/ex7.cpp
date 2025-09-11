#include <iostream>
#include <cmath>
using namespace std;

float triangle_area(float a, float b, float c);

int main(){
    float a, b, c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;

    cout << "Area of triangle = " << triangle_area(a,b,c);
}

float triangle_area(float a, float b, float c){
    float A, S;

    S = (a + b + c)/2;
    A = sqrt(S* (S - a)*(S - b) * (S - c));

    return A;
}