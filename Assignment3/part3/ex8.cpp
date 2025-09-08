#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    int order_number;

    cout << "enter an extension: ";
    cin >> input;

    if (input == "jpg") {
    order_number = 0;
    }
    else if (input == "png") {
        order_number = 1;
    }
    else if (input == "bmp") {
        order_number = 2;
    }
    else if (input == "ppt") {
        order_number = 3;
    }
    else if (input == "xls") {
        order_number = 4;
    }
    else if (input == "doc") {
        order_number = 5;
    }
    else if (input == "pdf") {
        order_number = 6;
    }
    else if (input == "txt") {
        order_number = 7;
    }
    else if (input == "zip") {
        order_number = 8;
    }
    else if (input == "rar") {
        order_number = 9;
    }
    else{
        order_number = 404;
    }


    switch (order_number){
        case 0:
        case 1:
        case 2:
            cout << "image";
            break;
        
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            cout << "document";
            break;
        
        case 8:
        case 9:
            cout << "archive";
            break;
        
        default:
            cout << "wrong input";
    }


    return 0;
}