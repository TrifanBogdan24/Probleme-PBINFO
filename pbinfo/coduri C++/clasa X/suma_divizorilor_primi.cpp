// #20 - Suma divizorilor primi

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void sum_div_prim(int n, int &s)
{
    int ok, OK = 1;
    s = 0;

    for (int d = 2; d * d <= n; d++)
        if (n % d == 0)
            OK = 0;
    
    if (OK == 1)
        s = n;
    else
    {
        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                ok = 1;
                
                for (int d = 2; d * d <= i; d++)
                    if (i % d == 0)
                        ok = 0;
                
                if (ok == 1)
                    s = s + i;
            }
        }
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, sum = 0;

    cout << "n = ";
    cin >> n;

    sum_div_prim(n, sum);

    cout << "Suma divizorilor primi = " << sum << '\n';

    return 0;
}
