// #651 - SumSubMax
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sumsubmax.in");
ofstream g("sumsubmax.out");

int n, m, v[105], t[105], s[105], maxs = -1;
bool pus[105];

void citire()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
        f >> t[i];
    
    for (int i = 1; i <= n; i++)
        f >> v[i];
}

void parcurgere(int x, int rad)
{

    s[rad] += v[x];
    pus[x] = 1;
    for (int i = 1; i <= n; i++)
        if (pus[i] == 0 && t[i] == x)
            parcurgere(i, rad);
}

int main()
{
    citire();

    for (int i = 1; i <= n; i++)
    {
        s[i] = 0;
        for (int j = 1; j <= n; j++)
            pus[j] = 0;
        parcurgere(i, i);

        maxs = max(maxs, s[i]);
    }
    
    for (int i = 1; i <= n; i++)
        if (maxs == s[i])
            g << i << ' ';

    f.close();
    g.close();
    return 0;
}
