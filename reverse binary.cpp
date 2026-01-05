#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter Positive Integer: ";
    cin >> num;
    
    if (num == 0) {
        cout << "0" << endl;
    } else {
        while (num > 0) {
            int rem = num % 2;
            cout << rem;
            num = num / 2;
        }
        cout << endl;
    }
    return 0;
}

