// #911 - Cifre6

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void numar(int n, int k, int &x)
{
    int v[10] = {0}, i, ok = 1;
    x = 0;
    while (n != 0)
    {
        v[n % 10]++;
        n = n / 10;
    }
    ok = 1;
    i = 9;
    while (ok == 1)
    {
        while (v[i] != 0)
        {
            x = x * 10 + i;
            k--;
            v[i]--;
            if (k == 0)
                v[i] = 0;
        }

        if (k == 0)
            ok = 0;
        i--;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, k = 0, x = 0;

    cout << "n = ";
    cin >> n;

    cout << "k = ";
    cin >> k;

    numar(n, k, x);

    cout << "x = " << x << '\n';

    return 0;
}
