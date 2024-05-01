// #638 - Nivele
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nivele.in");
ofstream g("nivele.out");

int n, m, t[105], a[105][105], ndf[105], poz, k, x;
bool pus[105];

void dfs(int x, int lvl)
{
    pus[x] = 1;
    ndf[x] = lvl;

    for (int i = 1; i <= n; i++)
        if (pus[i] == 0 && a[i][x] == 1)
            dfs(i, lvl + 1);
}

int main()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
    {
        f >> t[i];
        pus[i] = 0;
        a[i][t[i]] = a[t[i]][i] = 1;
        if (t[i] == 0)
            poz = i;
    }
    
    dfs(poz, 1);
    f >> k;
    
    for (int i = 1; i <= k; i++)
    {
        f >> x;
        g << ndf[x] << '\n';
    }

    f.close();
    g.close();

    return 0;
}
