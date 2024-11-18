#include <iostream>
using namespace std;

int main() {
    int n;

    // Input the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Read values using pointer notation
    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Value " << (i + 1) << ": ";
        cin >> *(arr + i);  // Using pointer notation to read values
    }

    // Display the entered values
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << *(arr + i) << " ";  // Using pointer notation to display values
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}

