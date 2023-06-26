// #2305 - Numere21
#include <iostream>

using namespace std;

long long invers(long long x)
{
    long long inv = 0;
    while (x)
    {
        inv = inv * 10 + x % 10;
        x = x / 10;
    }
    return inv;
}

bool prim(long long a,long long b)
{
    while (a != b)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }

    if (b == 1) return 1;
    else return 0;
}

int main()
{
    long long n = 0, m = 0, S = 0;

    cin >> n >> m;

    while (n && m)
    {
        if (prim(n, m) == 1 && prim(invers(n), invers(m)) == 1)
            S = S + n + m;
        cin >> n >> m;
    }
    cout << S;
    return 0;
}
