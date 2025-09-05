#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    
    if(a>b){
        cout << "a>b";
    }
    else if (a<b){
        cout << "a<b";
    }
    else{
        cout << "equal";
    }
    return 0;
}