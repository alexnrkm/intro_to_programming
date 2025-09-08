#include <iostream>
#include <string>
using namespace std;

int main (){
    string input1, input2;

    cout << "enter a word: ";
    cin >> input1;

    if (input1 == "scissors" || input1 == "rock" || input1 == "paper"){
        if (input1 == "scissors"){
            cout << "rock";
        }
        else if (input1 == "paper"){
            cout << "scissors";
        }
        else{
            cout << "paper";
        }
    }
    else{
        cout << "value is not a valid choice";
    }

    return 0;
}