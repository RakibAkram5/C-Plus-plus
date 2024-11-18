#include <iostream>
using namespace std;

// Function to search for a value in the array
int search(int* arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;  // Return the index if the value is found
        }
    }
    return -1;  // Return -1 if the value is not found
}

// Function to shift the array to the left from a given index
void shift_left_index(int* arr, int size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index!" << endl;
        return;
    }

    // Shift elements to the left starting from the given index
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];  // Shift the next element into the current position
    }

    // Optional: Set the last element to a default value (e.g., 0 or -1)
    arr[size - 1] = 0; // Assuming we want to clear the last position
}

// Function to remove a value from the array
int remove_value(int* arr, int size, int value) {
    int index = search(arr, size, value);  // Search for the value in the array
    if (index != -1) {  // If the value is found
        shift_left_index(arr, size, index); // Shift left to remove the value
        return size - 1; // Return the new size of the array (one less)
    } else {
        cout << "Value not found!" << endl;
        return size;  // Return the original size if value not found
    }
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
    int size;

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

    // Input the value to remove
    int value;
    cout << "Enter value to remove from the array: ";
    cin >> value;

    // Remove the value from the array
    size = remove_value(numbers, size, value);

    // Display the array after removal
    display(numbers, size);

    // Free dynamically allocated memory
    delete[] numbers;

    return 0;
}

