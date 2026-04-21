#include <iostream>
using namespace std;

int main() {
    
    const int size = 5; // Size of the array
    int numbers[size];

    // Input loop to populate array
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Calculate sum of all values
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    // Calculate average
    double average = sum / size;

    // Display the array contents
    cout << "\nYou entered: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i];
        if (i < size - 1) cout << ", ";
    }

    // Display the sum and average of the contents
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}