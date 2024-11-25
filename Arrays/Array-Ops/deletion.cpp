#include <iostream>
using namespace std;

void deleteElement(int arr[], int& n, int key) {
    // Find the position of the element to be deleted
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    // If the element is not found
    if (pos == -1) {
        cout << "Element not found in the array." << endl;
        return;
    }

    // Deleting the element
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    n--;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    cout << "Original array: ";
    printArray(arr, n);

    deleteElement(arr, n, key);

    cout << "Array after deletion: ";
    printArray(arr, n);

    return 0;
}