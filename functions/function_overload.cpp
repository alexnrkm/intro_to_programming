#include <iostream>
using namespace std;

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(string s) {
    cout << "String: " << s << endl;
}

void print(double d) {
    cout << "Decimal: " << d << endl;
}

int main() {
    print(5);        // Calls the int version
    print("hello");  // Calls the string version
    print(3.14);     // Calls the double version
}

//Function overloading means:

//You can have more than one function with the same name, but with different inputs (parameters).

//The compiler will figure out which one to use based on the arguments you give.