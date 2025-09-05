#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature in Celsius: ";
    cin >> temp;

    if (temp >= 30) {
        cout << "It's hot!" << endl;
    } else if (temp >= 20) {
        cout << "It's warm." << endl;
    } else if (temp >= 10) {
        cout << "It's cool." << endl;
    } else {
        cout << "It's cold." << endl;
    }

    return 0;
}