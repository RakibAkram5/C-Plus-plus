#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, next;

    cout << "Fibonacci Series: " << a << " " << b << " ";
    
    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    if (n < 2) {
        cout << "Enter a number greater than or equal to 2" << endl;
    } else {
        fibonacci(n);
    }
    
    return 0;
}

