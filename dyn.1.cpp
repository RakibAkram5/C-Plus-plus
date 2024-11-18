#include <iostream>
using namespace std;

int search_value(int* arr, int size, int value) {
    // Loop through the array to search for the value
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;  // Return the index if the value is found
        }
    }
    return -1;  // Return -1 if the value is not found
}

int main() {
    int size, value;

    // Input the size of the array
    cout << "Enter size of the array: ";
    cin >> size;

    // Dynamically allocate memory for the array
    int* numbers = new int[size];

    // Input array elements
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    // Input the value to search for
    cout << "Enter value to search for: ";
    cin >> value;

    // Call the search function
    int index = search_value(numbers, size, value);

    // Output the result
    if (index != -1) {
        cout << "Value found at index: " << index << endl;
    } else {
        cout << "Value not found in the array." << endl;
    }

    // Free dynamically allocated memory
    delete[] numbers;

    return 0;
}

