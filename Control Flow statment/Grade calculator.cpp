#include <iostream>
using namespace std;

main() 
{
    int marks;

    // Taking input from user
    cout << "Enter the student's marks (0 - 100): ";
    cin >> marks;

    // Checking marks and assigning grades
    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A+" << endl;
    }
    else if (marks >= 80 && marks < 90) {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 70 && marks < 80) {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60 && marks < 70) {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 50 && marks < 60) {
        cout << "Grade: D" << endl;
    }
    else if (marks >= 0 && marks < 50) {
        cout << "Grade: F (Fail)" << endl;
    }
    else {
        // Handling invalid input
        cout << "Invalid marks entered! Please enter a value between 0 and 100." << endl;
    }
}

