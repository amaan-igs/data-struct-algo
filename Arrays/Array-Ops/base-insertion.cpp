#include <iostream>
using namespace std;

int main() {
    int n;

    // Step 1: Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n + 1]; // Declare an array with one extra space for insertion

    // Step 2: Input array elements
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Step 3: Input the new element and its position
    int x, pos;
    cout << "Enter the element to insert: ";
    cin >> x;
    cout << "Enter the position (0-indexed) to insert the element: ";
    cin >> pos;

    // Step 4: Check if position is valid
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return 1; // Exit program
    }

    // Step 5: Shift elements to the right to make space
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 6: Insert the new element at the specified position
    arr[pos] = x;
    n++; // Update size of the array

    // Step 7: Print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
