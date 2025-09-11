#include <iostream>
using namespace std;

bool is_vowel(char c) {
    c = tolower(c);

    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (is_vowel(ch)) {
        cout << ch << " is a vowel." << endl;
    } else {
        cout << ch << " is NOT a vowel." << endl;
    }

    return 0;
}
