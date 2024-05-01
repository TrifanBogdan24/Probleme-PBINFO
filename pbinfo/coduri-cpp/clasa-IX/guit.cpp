// #2312 - guIt
#include <iostream>

using namespace std;

int nr = 3;
long long n, d, S;

bool prim(long long x)
{
    bool ok = 1;
    long long d = 2;

    while (d * d <= x)
    {
        if (x % d == 0)
            return 0;
        d++;
    }
    return 1;
}

int main()
{
    cin >> n;
    d = 2;
    while (d * d <= n && nr)
    {
        if (n % d == 0 && prim(d) == 1)
        {
            nr--;
            S += d;
        }
        d++;
    }
    cout << S;
    return 0;
}
