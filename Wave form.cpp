#include <iostream>
using namespace std;

// Function to swap two elements
void swapElements(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to sort the array in wave form
void waveSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i += 2) {
        // If current element is smaller than previous, swap
        if (i > 0 && arr[i] < arr[i - 1])
            swapElements(arr[i], arr[i - 1]);

        // If current element is smaller than next, swap
        if (i < n - 1 && arr[i] < arr[i + 1])
            swapElements(arr[i], arr[i + 1]);
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {10, 90, 49, 2, 1, 5, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    printArray(arr, n);

    waveSort(arr, n);

    cout << "Wave Form Sorted Array: ";
    printArray(arr, n);

    return 0;
}

