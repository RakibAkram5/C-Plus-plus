#include <iostream>
using namespace std;

int main() {
    int arr[20];
    int found = 0, n = 0, exists = 0;

    cout << "Enter elements (enter -1 to stop): ";
    
    // Taking input and stopping if -1 is encountered
    for (int i = 0; i < 20; i++) {
        cin >> arr[i];
        if (arr[i] == -1) {
            break;
        }
        n++;  // Count how many elements were entered
    }

    cout << "Enter the number to search: ";
    cin >> found;

    // Searching for the number
    for (int i = 0; i < n; i++) {
        if (arr[i] == found) {
            exists = 1;
            break;
        }
    }

    if (exists) {
        cout << found << " exists in the entered sequence." << endl;
    } else {
        cout << found << " does not exist in the entered sequence." << endl;
    }

    return 0;
}

