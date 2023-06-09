// #1509 - NrMaxim

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int nrmaxim(int n)
{
    int m, max, q = 0, p1 = 1, e, p2;
    m = n;
    max = m;
    
    while (m != 0)
    {
        q++;
        m = m / 10;
        p1 = p1 * 10;
    }
    
    p1 = p1 / 10;
    p2 = p1 / 10;

    for (int i = 1; i <= q; i++)
    {
        e = n / p1;
        n = n % p1 * 10 + e;

        if (n > max)
            max = n;
    }

    return max;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;

    cout << "n = ";
    cin >> n;

    cout << nrmaxim(n) << '\n';
    
    return 0;
}
