// #1472 - Castel
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("castel.in");
ofstream g("castel.out");
int n, k, i, j, v[11], Max = -1, r, cif;
long long x;

int main()
{
    f >> n;
    for (i = 1; i <= n; i++)
    {
        f >> x;
        while (x)
        {
            v[x % 10]++;
            x /= 10;
        }
    }
    f >> k;
    for (i = 1; i <= k; i++)
    {
        f >> cif;
        if (v[cif] > Max)
        {
            Max = v[cif];
            r = cif;
        }

    }
    g << r << ' ' << Max;
    f.close();
    g.close();
    return 0;
}
