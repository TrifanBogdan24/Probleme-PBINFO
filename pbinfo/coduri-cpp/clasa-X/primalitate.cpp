// #14 - Primalitate
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int n = 0;

int prim(int n)
{
    if (n <= 1)
        return 0;

    for (int d = 2; d * d <= n; d++)
        if (n % d == 0)
            return 0;

    return 1;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    cout << "Introduceti numarul n = ";
    cin >> n;

    if (prim(n))
        cout << n << " este un numar prim\n";
    else
        cout << n << " NU este un numar prim\n";

    return 0;
}
