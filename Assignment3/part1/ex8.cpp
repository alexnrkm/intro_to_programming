#include <iostream>
using namespace std;

int main(){
    int input;

    cout << "enter a number: ";
    cin >> input;

    if (input > 0){
        cout << "positive";
    }
    else if (input < 0){
        cout << "negative";
    }
    else{
        cout << "zero value";
    }

    return 0;
}