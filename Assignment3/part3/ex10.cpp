#include <iostream>
using namespace std;

int main(){
    float a, b, result;
    char c;

    cout << "enter an expression (e.g. 5 + 5): ";
    cin >> a >> c >> b;

    if(c == '*'){
        result = a * b;
    }
    else if(c == '/'){
        result = a / b;
    }
    else if (c == '+'){
        result = a + b;
    }
    else if (c == '-'){
        result = a - b;
    }
    else{
        cout << "wrong sign";
    }
    cout << "your result is: " << result;

    return 0;
}