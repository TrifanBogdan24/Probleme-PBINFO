// #438 - ComponenteConexe
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("componenteconexe.in");
ofstream g("componenteconexe.out");

int n, m, a[105][105], M[400][2], rez[105], nr, x, y;
bool pus[105];

void dfs(int x, int nrct)
{

    rez[x] = nrct;
    pus[x] = 1;
    for (int i = 1; i <= n; i++)
        if (a[x][i] == 1 && pus[i] == 0)
            dfs(i, nrct);
}

int main()
{
    f >> n;
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;

    for (int i = 1; i <= n; i++)
        pus[i] = 0;

    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0)
        {
            nr++;
            dfs(i, nr);
        }
    }

    g << nr << '\n';
    for (int i = 1; i <= nr; i++)
    {
        for (int j = 1; j <= n; j++)
            if (rez[j] == i)
                g << j << ' ';
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
