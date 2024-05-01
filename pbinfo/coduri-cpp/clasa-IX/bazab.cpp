// #426 - bazaB
#include <iostream>

using namespace std;

long long n;
int b, cmax, cif;

int main()
{
    cin >> n >> b;
    cmax = 0;

    while (n)
    {
        cif = n % b;
        if (cif > cmax)
            cmax = cif;
        n /= b;
    }
    cout << cmax;
    return 0;
}
