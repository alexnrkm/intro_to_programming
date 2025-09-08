#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;

    if(a + b > c && a + c > b && b + c > a){
        cout << "triangle is valid" << endl;
    }
    else{
        cout << "triangle is not valid";
    }

    return 0;
}