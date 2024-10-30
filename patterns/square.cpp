#include <iostream>
#include <string>
using namespace std;

int main(){
    int n =3;
    int i =1;

    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << "*";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

// ***
// ***
// ***