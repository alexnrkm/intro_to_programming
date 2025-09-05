#include <iostream>
using namespace std;

int main(){
    int input, A, B, C;
    A = 90;
    B = 75;
    C = 50;
    cout << "enter your grade: ";
    cin >> input;
    if(input>=A){
        cout << "your grade is A";
    }
    else if(input>=B){
        cout << "your grade is B";
    }
    else if(input>=C){
        cout << "your grade is C";
    }
    else{
        cout << "your grade is F";
    }
}