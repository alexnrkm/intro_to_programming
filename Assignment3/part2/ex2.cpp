#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "a = " << a << " b = " << b << endl;
    c = a;
    a = b;
    b = a;
    cout << "swapped values: " << "a = " << a << " b = " << b << endl;
    return 0;
}