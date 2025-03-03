#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int original = num, reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;          // Extract last digit
        reversed = reversed * 10 + digit; // Append to reversed number
        num /= 10;                 // Remove last digit
    }

    return (original == reversed);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num))
        cout << num << " is a Palindrome." << endl;
    else
        cout << num << " is NOT a Palindrome." << endl;

    return 0;
}

