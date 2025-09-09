#include <iostream>
#include <math.h>
using namespace std;

int func (float x);

int main(){
    float x;
    cout << "enter x: ";
    cin >> x;

    cout << "the result is: " << func(x);
}

int func (float x){
    float y = cos (x) + abs(x+2) +log(abs(3*x+2));
    return y;
}