#include <iostream>
using namespace std;

int main() {
    int number;
    int digits[5]; // Array to store the digits

    // Ask the user for a 5-digit number
    cout << "Enter a five digit number: ";
    cin >> number;

    // Extract each digit from the number and store it in the array
    for (int i = 4; i >= 0; i--) {
        digits[i] = number % 10;  // Get the last digit
        number /= 10;             // Remove the last digit
    }

    // Output the digits
    cout << "Digits: ";
    for (int i = 0; i < 5; i++) {
        cout << digits[i] << " ";
    }

    return 0;
}

