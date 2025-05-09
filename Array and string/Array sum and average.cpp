#include <iostream>
using namespace std;

main() 
{
    int n;

    // Asking for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Declaring the array
    int arr[n];

    // Taking input for the array elements
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculating sum and average
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Adding each element to sum
    }

    double average = static_cast<double>(sum) / n;  // Calculating the average

    // Displaying the results
    cout << "Sum of the elements: " << sum << endl;
    cout << "Average of the elements: " << average << endl;

}

