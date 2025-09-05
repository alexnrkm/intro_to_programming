#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    cout << "enter the first side: ";
    cin >> a;
    cout << "enter the second side: ";
    cin >> b;
    cout << "enter the third side: ";
    cin >> c;
    
    if (a == b && b == c){
        cout << "Equilateral";
    }
    else if(a == b || b == c || c == a){
        cout << "Isosceles";
    }
    else {
        cout << "Scalene";
    }
    return 0;
}