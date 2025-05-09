#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void inputPersonDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // To consume leftover newline character
    }

    void displayPersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
public:
    string major;

    void inputStudentDetails() {
        inputPersonDetails(); // Reusing base class function
        cout << "Enter major: ";
        getline(cin, major);
    }

    void displayStudentDetails() {
        displayPersonDetails(); // Reusing base class function
        cout << "Major: " << major << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    string subject;

    void inputTeacherDetails() {
        inputPersonDetails(); // Reusing base class function
        cout << "Enter subject taught: ";
        getline(cin, subject);
    }

    void displayTeacherDetails() {
        displayPersonDetails(); // Reusing base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create Student object
    Student student;
    cout << "Enter student details:" << endl;
    student.inputStudentDetails();
    cout << "\nStudent Information:" << endl;
    student.displayStudentDetails();

    cout << "---------------------------" << endl;

    // Create Teacher object
    Teacher teacher;
    cout << "Enter teacher details:" << endl;
    teacher.inputTeacherDetails();
    cout << "\nTeacher Information:" << endl;
    teacher.displayTeacherDetails();

}

