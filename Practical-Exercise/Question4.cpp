#include <iostream> 
using namespace std;

// Function to check if character is uppercase
bool isUppercase(char ch) {
    return (ch >= 'A' && ch <= 'Z');
}

// Function to check if character is lowercase
bool isLowercase(char ch) {
    return (ch >= 'a' && ch <= 'z');
}

int main() {
    char input;

    cout << "Enter a character: ";
    cin >> input;

    // Check and display the case
    if (isUppercase(input)) {
        cout << "'" << input << "' is UPPERCASE" << endl;
    }
    else if (isLowercase(input)) {
        cout << "'" << input << "' is lowercase" << endl;
    }
    else {
        cout << "'" << input << "' is not a letter" << endl;
    }

    return 0;
}