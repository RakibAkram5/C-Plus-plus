#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][10], int rows, int cols, int transpose[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j]; // Swap elements
        }
    }
}

void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
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

    int matrix[10][10], transpose[10][10];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:\n";
    displayMatrix(matrix, rows, cols);

    transposeMatrix(matrix, rows, cols, transpose);

    cout << "\nTranspose of Matrix:\n";
    displayMatrix(transpose, cols, rows);

    return 0;
}

