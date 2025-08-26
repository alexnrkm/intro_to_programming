#include <iostream>
using namespace std;
int main (){
    int a = 3, b = 2;

    bool f, g, x;


    f = a>b && a > 0; // && -> logical AND (a is greater than b AND a is greater than 0)
    cout << f << endl;

    g = a > b || a > 0; // || -> logical OR (a is greater than b OR a is greater than 0)
    cout << g << endl;

    x = !(a > b); // ! -> logical NOT (a is NOT greater than b)
    cout << x << endl;

    return 0;
}