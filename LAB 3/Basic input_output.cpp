#include <iostream> // Include input-output stream

main() 
{
    std::string name; // Variable to store the user's name
    int age;          // Variable to store the user's age

    // Ask for the user's name
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // Use getline to allow spaces in the name

    // Ask for the user's age
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Display a personalized greeting
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

}

