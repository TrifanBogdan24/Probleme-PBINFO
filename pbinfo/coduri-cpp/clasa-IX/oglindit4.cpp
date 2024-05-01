// #409 - Oglindit4
#include <iostream>

using namespace std;
int n, i, nr;
long long v[1005];

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

long long prim(long long a,long long b)
{
    while (a != b)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return b;
}

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (prim(v[i], invers(v[i])) == 1)
            nr++;
    }
    cout << nr;
    return 0;
}
