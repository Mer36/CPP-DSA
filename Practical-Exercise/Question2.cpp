#include <iostream>
#include <cmath>  
using namespace std;

int main() {

    double radius;
    const double PI = 3.14159265359;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    // Calculate volume using formula V = (4/3) * π * r³
    // Using pow() function for r³
    double volume = (4.0 / 3.0) * PI * pow(radius, 3);

    // Display result with 2 decimal places
    cout.precision(2);
    cout << fixed;
    cout << "Volume of the sphere is: " << volume;

    return 0;
}