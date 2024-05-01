// #32 - EliminareCifre

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void P(int &n, int c)
{
    // elimina toate aparatiile ale cifrei c
    // din numarul n

    int m, v[11] = {0}, nr = 0;
    m = n;

    while (m != 0)
    {
        nr++;
        v[nr] = m % 10;
        m = m / 10;
    }
    
    for (int i = 1; i <= (nr + 1) / 2; i++)
        swap(v[i], v[nr - i + 1]);
    
    n = 0;
    for (int i = 1; i <= nr; i++)
        if (v[i] != c)
            n = n * 10 + v[i];
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
