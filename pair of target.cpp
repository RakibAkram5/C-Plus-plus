#include <iostream>
using namespace std;

pair<int, int> findTwoSum(int arr[], int n, int target) {
    // Loop through each element in the array
    for (int i = 0; i < n - 1; i++) {
        // Check all elements after arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return make_pair(i, j); // Return the indices if a match is found
            }
        }
    }
    return make_pair(-1, -1); // Return -1, -1 if no pair is found
}

int main() {
    int arr[] = {10, 15, 3, 7, 8}; // Example array
    int target = 20;
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    pair<int, int> result = findTwoSum(arr, n, target);

    if (result.first != -1) {
        cout << "Indices: " << result.first << ", " << result.second << endl;
    } else {
        cout << "No pair found." << endl;
    }

    return 0;
}

