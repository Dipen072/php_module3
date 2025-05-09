#include <iostream>
using namespace std;

main() {
    int height;

    // Taking input for the height of the triangle
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Outer loop for the rows (height of the triangle)
    for (int i = 1; i <= height; i++) {
        // Inner loop to print stars in each row
        for (int j = 1; j <= i; j++) {
            cout << "*";  // Print a star
        }
        cout << endl;  // Move to the next line after each row
    }

}

