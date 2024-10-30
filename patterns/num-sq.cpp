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
            cout << i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}
// --> j loops here
// 111     
// 222    \|/ i loops here
// 333