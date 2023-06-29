// #911 - Cifre6
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void numar(int n, int k, int &x)
{
    int v[10] = {0}, cif = 9, ok = 1;
    x = 0;
    
    while (n != 0)
    {
        v[n % 10]++;
        n = n / 10;
    }
    
    ok = 1;
    cif = 9;
    
    while (ok == 1)
    {
        while (v[cif] != 0)
        {
            x = x * 10 + cif;
            k--;
            v[cif]--;
            if (k == 0)
                v[cif] = 0;
        }

        if (k == 0)
            ok = 0;
        cif--;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, k = 0, x = 0;
    cin >> n >> k;
    numar(n, k, x);
    cout << x << '\n';
    return 0;
}
