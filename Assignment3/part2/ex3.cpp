#include <iostream>
using namespace std;

int main(){
    int amount, tip;
    cout << "enter an amount: ";
    cin >> amount;
    cout << "enter a tip percent: ";
    cin >> tip;

    cout << "the total tip amount is: " << amount*tip/100 << endl;

    return 0;
}