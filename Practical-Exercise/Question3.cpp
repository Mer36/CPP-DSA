#include <iostream>
using namespace std;

//function that calculates the area of square
double calculateArea(double side) {
    return side * side;
}

// function to calculate perimeter of square
double calculatePerimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    //calculate the area and perimeter of the square using functions
    double area = calculateArea(side);
    double perimeter = calculatePerimeter(side);

    cout << "Area of the square is : " << area << endl;
    cout << "Perimeter of the square is : " << perimeter << endl;

    return 0;
}