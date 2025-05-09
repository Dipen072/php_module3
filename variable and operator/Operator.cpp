#include <iostream>
using namespace std;

main() 
{
    int a = 10, b = 20;
    bool x = true, y = false;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;
    cout << "!x: " << (!x) << endl;
    cout << "!y: " << (!y) << endl;

    cout << "\nBitwise Operators:" << endl;
    cout << "a & b = " << (a & b) << endl;   // Bitwise AND
    cout << "a | b = " << (a | b) << endl;   // Bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl;   // Bitwise XOR
    cout << "~a = " << (~a) << endl;         // Bitwise NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift

}

