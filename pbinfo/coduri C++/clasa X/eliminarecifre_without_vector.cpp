// #32 - EliminareCifre
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void P(int &n, int c)
{
    int m = 0;
    int q = 1;

    while (n)
    {
        if (n % 10 != c)
        {
            m = (n % 10) * q + m;
            q = q * 10;
        }

        n /= 10;
    }

    n = m;
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
    cout << n << '\n';
    return 0;
}
