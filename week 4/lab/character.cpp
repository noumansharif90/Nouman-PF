#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter only a single character: ";
    cin >> ch;

    // Check if the character is a number
    if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' ||
        ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9') {
        cout << "This is a number" << endl;
    }
    else {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            cout << "This is a vowel" << endl;
        }
        else {
            // If not number and not vowel, it's a consonant
            cout << "This is a consonant" << endl;
        }
    }

    
}