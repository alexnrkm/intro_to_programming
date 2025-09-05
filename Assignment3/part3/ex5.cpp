#include <iostream>
using namespace std;

int main(){
    float x, y, z;
    cout << "enter x: ";
    cin >> x;
    cout << "enter y: ";
    cin >> y;
    cout << "enter z: ";
    cin >> z;

    if (x == y || y == z || x == z){
        cout << "NO";
    }
    else if (x > y){
        if (x > z){
            cout << "max: " << x << " ";
            if(z > y){
                cout << "mid: " << z << " ";
                cout << "min: " << y;
            }
            else{
                cout << "mid: " << y << " ";
                cout << "min: " << z;
            }
        }
        else if (x < z){
            cout << "max: " << z << " ";
            if(x > y){
                cout << "mid: " << x << " ";
                cout << "min: " << y; 
            }
        }
    }
    else if (y > x){
        if (y > z){
            cout << "max: " << y << " ";
            if(x > z){
                cout << "mid: " << x << " ";
                cout << "min: " << z;
            }
            else{
                cout << "mid: " << z << " ";
                cout << "min: " << x;
            }
        }
        else if (y < z){
            cout << "max: " << z << " ";
            if(x > y){
                cout << "mid: " << x << " ";
                cout << "min: " << y;
            }
            else{
                cout << "mid: " << y << " ";
                cout << "min: " << x;
            }
        }
    }

    return 0;
}