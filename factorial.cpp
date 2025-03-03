#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int fact = 1;
    if (num >= 0) {
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        cout << "Factorial of " << num << " is: " << fact << endl;
    } else {
        cout << "Factorial of a negative number is not defined." << endl;
    }

    return 0;
}

