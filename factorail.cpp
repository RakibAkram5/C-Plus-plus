#include <iostream>
using namespace std;

int main() {
    int n;
    int fact = 1;
    cout << "Please Enter a Non-Negative Number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers!" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << "The Factorial of the input number is: " << fact << endl;
    }

    return 0;
}
