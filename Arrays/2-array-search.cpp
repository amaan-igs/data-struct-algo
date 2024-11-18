#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    
    cout << "Input desired size for  array :  " << std::endl;
    int n;   
    cin >> n;
    int arr[n];
   
    cout << "Input elements for the array :  " << std::endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nInput element to search: ";
    int target;
    cin >> target;
    linearSearch(arr, n, target);
    int index = linearSearch(arr, n, target);
    if (index != -1) {
        cout << "Element found at index: " << index << std::endl;
    } else {
        cout << "Element not found" << std::endl;
    }

    return 0;
}