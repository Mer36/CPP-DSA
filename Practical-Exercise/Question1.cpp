#include <iostream>
using namespace std;

int main() {
    int days;

    cout << "Enter the number of days: ";
    cin >> days;

    int seconds = days * 24 * 60 * 60;

    // Display the result
    cout << days << " days = " << seconds << " seconds" << endl;

    return 0;
}