#include <iostream>
using namespace std;

int main(){
    int allowed_age, real_age;
    allowed_age = 21;
    cout << "enter your age: ";
    cin >> real_age;
    if(real_age>=21){
        cout << "allowed to drink";
    }
    else{
        cout << "not allowed to drink";
    }
    return 0;
}