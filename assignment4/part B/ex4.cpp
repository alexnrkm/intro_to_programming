#include <iostream>
using namespace std;

int maximum(int a, int b);

int main(){
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    
    if(maximum(a,b) == 00){
        cout << "numbers are equal";
    }
    else{
        cout << "max value: " << maximum(a,b);
    }
}

int maximum(int a, int b){
    if (a > b){
        return a;
    }
    else if (b > a){
        return b;
    }
    else{
        return 00;
    }
}