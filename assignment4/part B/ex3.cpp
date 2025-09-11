#include <iostream>
#include <math.h>
using namespace std;

int calculate_area(int a, int b);

int main(){
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;

    cout << "the area of rectangle = " << calculate_area(a,b);
}

int calculate_area(int a, int b){
    int output = a * b;
    return output;
}