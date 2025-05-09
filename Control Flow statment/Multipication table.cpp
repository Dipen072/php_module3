#include <iostream>
using namespace std;

int main() {
    int number;

    // Taking input from the user
    cout << "Enter a number to display its multiplication table: ";
    cin >> number;

    // Displaying the multiplication table using a for loop
    cout << "Multiplication Table of " << number << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

}

