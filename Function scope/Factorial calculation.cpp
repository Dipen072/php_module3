#include <iostream>
using namespace std;

// Recursive function to calculate factorial
factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial of (n-1)
    return n * factorial(n - 1);
}

main() 
{
    int num;

    // Ask user for input
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    // Check if the input is non-negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        // Call the factorial function and display the result
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }

}

