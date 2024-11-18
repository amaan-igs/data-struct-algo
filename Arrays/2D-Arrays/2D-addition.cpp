#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input the size of the matrices
    cout << "Enter the number of rows and columns for the matrices: ";
    cin >> rows >> cols;

    // Declare the matrices
    int A[100][100], B[100][100], Result[100][100];

    // Input elements for Matrix A
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> A[i][j];
        }
    }

    // Input elements for Matrix B
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> B[i][j];
        }
    }

    // Add the matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Result[i][j] = A[i][j] + B[i][j];
        }
    }

    // Output the resulting matrix
    cout << "Resultant Matrix after Addition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << Result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
