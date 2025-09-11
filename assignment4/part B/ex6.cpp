#include <iostream>
using namespace std;

float average_three(float a, float b, float c);

int main(){
    float a, b, c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << "enter c: ";
    cin >> c;

    cout << "the average = " << average_three(a, b, c);

    return 0;
}

float average_three(float a, float b, float c){
    float result = (a + b + c) / 3;
    return result;
}