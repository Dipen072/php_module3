#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

// Function that uses both global and local variables
displayVariables() {
    // Local variable
    int localVar = 20;

    cout << "Inside displayVariables function:" << endl;
    cout << "Global variable: " << globalVar << endl; // Accessing global variable
    cout << "Local variable: " << localVar << endl;   // Accessing local variable
}

main() 
{
    // Local variable in main function
    int mainLocalVar = 30;

    cout << "Inside main function:" << endl;
    cout << "Global variable: " << globalVar << endl;  // Accessing global variable
    cout << "Local variable in main: " << mainLocalVar << endl; // Accessing main's local variable
    
    // Calling the function that accesses both global and local variables
    displayVariables();

    // Uncommenting the next line will cause an error because localVar is out of scope here
    // cout << "Trying to access localVar outside function: " << localVar << endl;

}

