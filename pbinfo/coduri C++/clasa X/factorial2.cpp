// #902 - Factorial2
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int det(int n)
{
    int q = 1, p = 1, i = 1, ok = 1, R;

    while (ok == 1)
    {
        q = q * i;
        p = p * (i + 1);

        if (q <= n && p >= n)
        {
            ok = 0;

            if (n - q <= p - n)
                R = q;
            else
                R = p;
        }
        
        i++;
    }

    return R;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    cout << det(n);     // cel mai aproape de n care este factorialul unui numar
    cout << '\n';
    return 0;
}
