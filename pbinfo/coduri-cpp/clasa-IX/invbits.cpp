// #2624 - invbits
#include <bits/stdc++.h>
using namespace std;
long long n, nr, i, rez, x;

int main()
{
    cin >> n;
    nr = 0;
    x = n;
    while (n)
    {
        nr++;
        n /= 2;
    }
    for (i = 0; i < nr; i++)
        x = (x ^ (1 << i));

    if (x==0) cout << 1;
    else cout << x;
    return 0;
}
