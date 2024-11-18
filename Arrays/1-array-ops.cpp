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
}