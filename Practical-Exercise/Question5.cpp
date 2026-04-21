#include <iostream>
using namespace std;

int main() {
   
    double x = 0;
    double y = 20;
    
    do {
        y = y - 4;
        x = x + (2.0 / y);

    } while (y >= 6);

    // Display final value of x 
    cout << "x: " << x;

    return 0;
}