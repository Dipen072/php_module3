#include <iostream>
using namespace std;

main() 
{
    int secretNumber = 42;  // The number the user has to guess
    int userGuess;
    int attempts = 0;

    // Loop for multiple attempts
    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;

    // While loop to give the user multiple chances
    while (true) {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        // Check if the guess is correct
        if (userGuess == secretNumber) {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
            break;  // Exit the loop since the user guessed correctly
        }
        else if (userGuess < secretNumber) {
            cout << "Your guess is too low. Try again!" << endl;
        }
        else {
            cout << "Your guess is too high. Try again!" << endl;
        }
    }
}

