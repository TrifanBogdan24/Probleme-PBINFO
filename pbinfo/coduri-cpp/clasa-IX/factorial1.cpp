// #534 - Factorial1
#include <bits/stdc++.h>
using namespace std;
int n, i, j, t, nrcifre = 1, v[1000000];

int main()
{
    cin >> n;
    v[1] = 1;
    for (i = 1; i <= n; i++)
    {
        t = 0;
        for( j = 1; j <= nrcifre; j++)
        {
            t = v[j] * i + t;
            v[j] = t % 10;
            t = t / 10;
        }

        while (t)
        {
            nrcifre++;
            v[nrcifre] = t % 10;
            t = t / 10;
        }
    }
    for ( i = nrcifre; i >= 1; i--)
        cout << v[i];
    return 0;
}
