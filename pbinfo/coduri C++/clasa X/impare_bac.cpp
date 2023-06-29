// #3119 - Impare_Bac
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void Impare(int &n)
{
    int q = 1;
    while (q < n)
    {
        int cat = n / q;
        int rest = n % q;

        if (cat % 2 != 0)
            n = (cat - 1) * q + rest;

        q = q * 10;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    Impare(n);
    cout << n << '\n';
    return 0;
}
