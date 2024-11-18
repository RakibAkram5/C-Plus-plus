#include <iostream>
using namespace std;

// Function to shift the array to the left from a given index
void shift_left_index(int* arr, int size, int index) {
    // Check if the index is valid
    if (index < 0 || index >= size) {
        cout << "Invalid index!" << endl;
        return;
    }

    // Shift elements to the left starting from the given index
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Shift the next element into the current position
    }

    // Optional: Set the last element to a default value (e.g., 0 or -1)
    arr[size - 1] = 0;
}

// Function to display the array values
void display(int* arr, int n_elements) {
    cout << "Array values: ";
    for (int i = 0; i < n_elements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size, ind, n;

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

    // Input the index to remove the value
    cout << "Enter the index of the value to remove: ";
    cin >> ind;

    // Call the shift function to remove the value at index ind
    shift_left_index(numbers, size, ind);

    // Calculate the new size (number of elements currently stored)
    n = size - 1; // Assuming the last element is no longer valid

    // Display the array after removing the element
    display(numbers, n);

    // Free dynamically allocated memory
    delete[] numbers;

    return 0;
}

