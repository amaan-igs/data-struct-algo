#include <iostream>
#include <string>
using namespace std;

int main() {
    // Integer type
    int age = 20;

    // Floating-point type
    float height = 5.9f;

    // Double-precision floating-point
    double distance = 123456.789;

    // Character type
    char grade = 'A';

    // Boolean type
    bool isStudent = true;

    // String type
    string name = "Amaan";

    // Output
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " ft" << endl;
    cout << "Distance: " << distance << " meters" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}
