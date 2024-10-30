#include <iostream>
#include <string>
using namespace std;

int main(){
    char ch;
    cout << "Enter char to verify type:  " << endl;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "uppercase value" << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "lowercase value" << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "numeric value" << endl;
    }
    else
    {
        cout << "error input" << endl;
    }
    
    return 0;
}