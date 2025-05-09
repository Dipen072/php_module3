#include <iostream>
using namespace std;

// Class to represent a Rectangle
class Rectangle {
private:
    int length;
    int width;

public:
    // Method to set dimensions
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    int calculateArea() {
        return length * width;
    }
};

main() 
{
    Rectangle rect; // Create an object of Rectangle
    int length, width;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    rect.setDimensions(length, width); // Set dimensions
    int area = rect.calculateArea();   // Calculate area using object

    cout << "Area of the rectangle is: " << area << endl;
}

