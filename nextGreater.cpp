#include <iostream>
using namespace std;

void nextGreaterElementBruteForce(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }
        cout << arr[i] << " -> " << nextGreater << endl;
    }
}

int main() {
    int arr[] = {4, 5, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Next Greater Elements:\n";
    nextGreaterElementBruteForce(arr, n);

    return 0;
}

