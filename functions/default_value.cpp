#include <iostream>
using namespace std;

int sum(int a, int b = 5); // <-- the prototype of a function

int main(){
    cout << sum(1, 2) << endl;
    cout << sum (1);
}

int sum(int a, int b = 5){
    int s = a + b;
    return s;
} 
//value b has a default value but if it will be declared in a function it will change to a declared value