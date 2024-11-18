#include <iostream>

int main() {
    // Declare an array of integers
    int arr[5] = {1, 2, 3, 4, 5};

    // Access and print array elements
    std::cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Find the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Size of the array: " << size << std::endl;

    return 0;
}