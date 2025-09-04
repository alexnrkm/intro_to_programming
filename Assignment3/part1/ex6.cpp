#include <iostream>
#include <string>
using namespace std;

int main() {
    string color;
    cout << "Input a color (red, yellow, green): ";
    cin >> color;

    if (color == "red") {
        cout << "Stop" << endl;
    } else if (color == "yellow") {
        cout << "Get Ready" << endl;
    } else if (color == "green") {
        cout << "Go" << endl;
    } else {
        cout << "Invalid color." << endl;
    }

    return 0;
}