// #20 -  Suma divizorilor primi
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;

    return 1;
}

void sum_div_prim(int n, int &s)
{
    s = 0;

    if (is_prime(n))
        s = n;

    for (int d = 2; d * d <= n / 2; d++)
        if (is_prime(d))
            s += d;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, sum = 0;
    cout << "n = "; cin >> n;
    sum_div_prim(n, sum);
    cout << "Suma divizorilor primi ai numarului " << n << " = " << sum << '\n';
    return 0;
}
