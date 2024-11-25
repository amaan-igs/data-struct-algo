#include <iostream>
using namespace std;

void traverseArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array elements: ";
    traverseArray(arr, size);

    return 0;
}

// checks and prints the elements of the array