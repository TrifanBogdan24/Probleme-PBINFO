// #405 - SumaCifreNrPrime
#include <iostream>

using namespace std;

int n, S;
long long v[10000];

bool prim(long long x)
{
    long long d = 2;

    while (d * d <= x)
    {
        if (x % d == 0)
            return 0;
        d++;
    }
    return 1;
}

int sum_cif(long long x)
{
    int s = 0;
    do {
        s += x % 10;
        x /= 10;
    } while(x);
    return s;
}

int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (prim(v[i]))
            S += sum_cif(v[i]);
    }

    cout<<S;
    return 0;
}
