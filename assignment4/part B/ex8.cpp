#include <iostream>
#include <string>
using namespace std;

string number_to_words (int a);

int main(){
    int input;
    cout << "enter a digit from 0 to 9: ";
    cin >> input;
    cout << number_to_words(input);
}

string number_to_words (int a){

    string b;
    switch(a) {
        case 0:
            b = "Zero";
            break;
        case 1:
            b = "One";
            break;
        case 2:
            b = "Two";
            break;
        case 3:
            b = "Three";
            break;
        case 4:
            b = "Four";
            break;
        case 5:
            b = "Five";
            break;
        case 6:
            b = "Six";
            break;
        case 7:
            b = "Seven";
            break;
        case 8:
            b = "Eight";
            break;
        case 9:
            b = "Nine";
            break;
        default:
            b = "Invalid number";
            break;
    }
    return b;
}