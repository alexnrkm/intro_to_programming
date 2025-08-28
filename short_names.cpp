#include <iostream>
using namespace std;

int main(){
    int a = 3, b = 2;

    a += b * 2; // a = a + (b * 2) 
    cout << a << endl;
    a = ++b; // b = 3, a = 3
    cout << a << endl;
    return 0;
}