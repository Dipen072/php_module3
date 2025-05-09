#include <iostream>
using namespace std;

main() 
{
    string str;
    
    // Taking input from the user
    cout << "Enter a string: ";
    getline(cin, str);

    bool isPalindrome = true;
    int length = str.length();

    // Checking characters from both ends
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

}

