#include <iostream>
#include <cmath>
using namespace std;

float func (float x);
float pi = 3.141592;


int main(){
    float x;
    cout << "enter x: ";
    cin >> x;
    cout << "the answer is: " << func(x);
    return 0;
}

float func (float x){
    float y = pow(pow(x, 5) + 1.7, 1.0/7.0) + cos(pow(x, 3)) + log(pow(x, 4)) + sin(pi * x);
    return y;
}