// #51 - Suma
#include <iostream>
using namespace std;

int n, suma = 0;

int main()
{
    cin >> n;
    suma = 0;

    while (n)
    {
        suma = suma + n;
        cin >> n;
    }

    cout << suma;
    return 0;
}
