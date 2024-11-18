#include <iostream>
using namespace std;
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

    // sum and avg of array elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "\nSum of array elements: " << sum << std::endl;

    // min and max of array elements
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Min of array elements: " << min << std::endl;
    cout << "Max of array elements: " << max << std::endl;

}