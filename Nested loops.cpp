#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a = 1; // Initialize `a` with a meaningful value
    for (int i = 1; i <= n; i++) {
        cout << "Iteration " << i << ": ";
        for (int j = 1; j <= 5; j++) { // Limit iterations to 5 for readability
            a = a * (i + j); // Example logic: multiply with (i + j)
            cout << a << " ";
        }
        cout << endl; // New line after each `i` iteration
    }

    return 0;
}


