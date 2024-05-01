// #2900 - joc9
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
fstream f("joc.in");
ofstream g("joc.out");
int n, nr, i, j;
long long  v[40000], x;

bool good(long long x)
{
    int s = 0;
    while (x > 9)
    {
        s = s + x % 10;
        x /= 10;
    }
    if (x == s) return 1;
    else return 0;
}
int main()
{
    f>>nr;
    for (i = 1; i <= nr; i++)
    {
        f >> x;
        if (good(x) == 1)
            v[++n] = x;
    }

    sort(v + 1, v + n + 1);

    for( i = 1; i <= n; i++)
        g << v[i] <<' ';
    return 0;
}
