#include <iostream>
using namespace std;

bool is_even(int a);

int main(){
    int a;
    cout << "enter a: ";
    cin >> a;
    bool result = is_even(a);
    if(result == 0){
        cout << "odd";
    }
    else{
        cout << "even";
    }

    return 0;
}

bool is_even(int a){
    if(a % 2 == 0){
        return true;
    }
    else {
        return false;
    }
}