#include <iostream>
using namespace std;

int sum(int a, int b);
void printSum(int a, int b);

int main(){
    int a = sum (5, 5);
    cout << a << "\n";

    printSum(5, 5);

    return 0;
}



int sum(int a, int b){
    int s = a + b;
    return s;
}

void printSum(int a, int b){
    cout << "The sum is: " << a + b;
}