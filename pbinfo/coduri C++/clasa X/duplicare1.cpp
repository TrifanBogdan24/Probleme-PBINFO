// #2826 - Duplicare1

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void duplicare(int n, int &d)
{
    // duplicarea fiecarei cifre pare
    // sau d = -1 daca n are doar cifre impare

    int a[11] = {0}, nr = 0, ok = 0;
    d = 0;
    
    while (n != 0)
    {
        nr++;
        a[nr] = n % 10;
        n = n / 10;
    }
    
    for (int i = 1; i <= (nr + 1) / 2; i++)
        swap(a[i], a[nr - i + 1]);
    
    for (int i = 1; i <= nr; i++)
    {
        d = d * 10 + a[i];
        if (d % 2 == 0)
        {
            d = d * 10 + a[i];
            ok = 1;
        }
    }
    
    if (ok == 0)
        d = -1;
}

// SOLUTIA PBINFO SE TERMINA AICI


int main()
{
    int n = 0, d = 0;
    cout << "n = ";
    cin >> n;

    duplicare(n, d);
    cout << "d = " << d << '\n';

    return 0;
}
