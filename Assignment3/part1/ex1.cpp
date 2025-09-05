#include <iostream>
using namespace std;

int main (){
    int year, input;
    year = 2025;
    cout << "enter a year: ";
    cin >> input;
    if (year == input){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}