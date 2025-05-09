#include <iostream>
using namespace std;

// Define the Calculator class
class Calculator {
public:
    // Function for addition 
add(double a, double b) {
         a + b;
    }

    // Function for subtraction
subtract(double a, double b) {
        a - b;
    }

    // Function for multiplication
multiply(double a, double b) {
        a * b;
    }

    // Function for division
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero is undefined!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;  // Create an object of Calculator class
    double num1, num2;
    char op;

    // Ask the user for input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    double result;

    // Perform operation based on user input
    switch(op) {
        case '+':
            result = calc.add(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = calc.subtract(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = calc.multiply(num1, num2);
            cout << "Result: " << result << endl;
            break;
        case '/':
            result = calc.divide(num1, num2);
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
}
}

