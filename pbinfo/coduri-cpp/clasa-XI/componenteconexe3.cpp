// #1603 - ComponenteConexe3
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("componenteconexe3.in");
ofstream g("componenteconexe3.out");

int n, m, d, a[105][105], M[400][2], rez[105], nr, noduri[105], maxx = -1, nr_maximei, val;
bool pus[105];

void dfs(int x, int nrct)
{

    rez[x] = nrct;
    noduri[nrct]++;
    pus[x] = 1;
    for (int i = 1; i <= n; i++)
        if (a[x][i] == 1 && pus[i] == 0)
            dfs(i, nrct);
}

int main()
{
    int x = 0, y = 0;

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
            noduri[nr] = 0;
            dfs(i, nr);
            if (noduri[nr] > maxx)
            {
                maxx = noduri[nr];
                nr_maximei = nr;
                val = i;
            }
        }
    }

    g << val << ' ' << maxx << '\n';
    /*
    cout<<nr<<'\n';
    for(i=1;i<=nr;i++)
    {
        for(j=1;j<=n;j++)
            if(rez[j]==i)cout<<j<<' ';
        cout<<'\n';
    }
    */

    f.close();
    g.close();
    return 0;
}
