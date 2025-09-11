#include <iostream>
#include <string>
using namespace std;

void printHello(string name);

int main (){
    string name;
    cout << "print your name: ";
    cin >> name;
    printHello(name);
}

void printHello(string name){
    cout << "Hello " << name;
}