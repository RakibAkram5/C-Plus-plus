#include <iostream>
using namespace std;
#define MAX 10  // Fixed macro name

// Function to swap two elements
void swapElements(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to rotate matrix 90 degrees clockwise
void rotate90Clockwise(int matrix[][MAX], int rows, int cols) {
    int transpose[MAX][MAX];

    // Step 1: Find Transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Step 2: Reverse each row of the transposed matrix
    for (int i = 0; i < cols; i++) {
        int left = 0, right = rows - 1;
        while (left < right) {
            swapElements(transpose[i][left], transpose[i][right]); // Using the swap function
            left++;
            right--;
        }
    }

    // Step 3: Display Rotated Matrix
    cout << "\nRotated Matrix (90 Degree Clockwise):\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to display the matrix
void displayMatrix(int matrix[][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) { // Fixed incorrect loop variable
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[MAX][MAX];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    displayMatrix(matrix, rows, cols);

    rotate90Clockwise(matrix, rows, cols);

    return 0;
}

