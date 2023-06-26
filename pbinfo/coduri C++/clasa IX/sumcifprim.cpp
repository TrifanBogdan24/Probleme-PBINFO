// #406 - SumCifPrim
#include <iostream>

using namespace std;
int n, i, nr = 0;
long long v[1005], S;


int suma_cif(long long x)
{
    int s = 0;
    while (x)
    {
        s += x % 10;
        x = x / 10;
    }
    return s;
}

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

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (prim(v[i]) == 1 && prim(suma_cif(v[i])) == 1)
            nr++;
    }
    cout << nr;
    return 0;
}
