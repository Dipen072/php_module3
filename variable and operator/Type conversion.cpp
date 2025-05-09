#include <iostream>
using namespace std;

main() 
{
    // Implicit Conversion
    int intVar = 10;
    double doubleVar;

    // Implicitly converting int to double
    doubleVar = intVar;  // No casting operator used, happens automatically

    cout << "Implicit Conversion:" << endl;
    cout << "Integer value (intVar): " << intVar << endl;
    cout << "After implicit conversion to double (doubleVar): " << doubleVar << endl;

    // Explicit Conversion
    double num1 = 5.75;
    int num2;

    // Explicitly converting double to int
    num2 = (int)num1;  // Using type casting operator

    cout << "\nExplicit Conversion:" << endl;
    cout << "Double value (num1): " << num1 << endl;
    cout << "After explicit conversion to int (num2): " << num2 << endl;

    // Another way: using static_cast
    int num3 = static_cast<int>(num1);
    cout << "Using static_cast to convert double to int (num3): " << num3 << endl;

}

