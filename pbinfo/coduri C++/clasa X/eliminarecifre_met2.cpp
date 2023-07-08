// #32 - EliminareCifre

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void P(int &n, int c)
{
    // elimina toate aparatiile ale cifrei c
    // din numarul n

    int q = 1;

    while (q <= n)
    {
        if ((n / q) % 10 != c)
            q *= 10;
        else
        {
            int nr1 = (n / q) / 10;
            int nr2 = n % q;

            n = nr1 * q + nr2;
        }
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, cif = 0;

    cout << "n = ";
    cin >> n;

    cout << "cif = ";
    cin >> cif;

    P(n, cif);

    cout << "noul n = " << n << '\n';

    return 0;
}
