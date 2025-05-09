#include <iostream>  // For input/output
using namespace std;

main() 
{
    // Constants (cannot be changed after they are set)
    const double PI = 3.14159;
    const int MAX_SCORE = 100;

    // Variables (can be changed)
    int age = 28;
    float height = 6.9;
    char grade = 'A';
    string name = "Virat Kholi";

    // Display initial values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years old" << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;

    cout << "Constant PI value: " << PI << endl;
    cout << "Maximum score: " << MAX_SCORE << endl;

    // Performing some operations
    age = age + 5;             // Increase age
    height = height + 0.1f;    // Increase height
    grade = 'A' + 1;           // Change grade (moves to next character 'B')

    cout << "\nAfter updates:" << endl;
    cout << "New Age: " << age << endl;
    cout << "New Height: " << height << endl;
    cout << "New Grade: " << grade << endl;

}

