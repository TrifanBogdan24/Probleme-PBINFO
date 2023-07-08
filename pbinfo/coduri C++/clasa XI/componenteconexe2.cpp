// #537 - ComponenteConexe2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("componenteconexe2.in");
ofstream g("componenteconexe2.out");

int n, m, a[105][105], nr, NR, x, y, conexe[105], M1[10000], M2[10000], q;
bool pus[105];

void dfs(int x, int nr_c_conexa)
{
    pus[x] = 1;
    conexe[x] = nr_c_conexa;
    for (int i = 1; i <= n; i++)
        if (a[x][i] == 1 && pus[i] == 0)
            dfs(i, nr_c_conexa);
}

int main()
{
    f >> n;
    while (f >> x >> y)
    {
        if (a[x][y] == 0)
        {
            a[x][y] = a[y][x] = 1;
            m++;
            M1[m] = x;
            M2[m] = y;
        }
    }
    
    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    
    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0)
        {
            NR++;
            dfs(i, NR);
        }
    }
    /*

    cout<<NR<<'\n';
    for(i=1;i<=NR;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(conexe[j]==i)cout<<j<<' ';
        }
        cout<<'\n';
    }

    */

    for (int j = 1; j <= m; j++)
    {
        /// eliminam pe rand fiecare muchie;daca nr. c. conexe sa schima-o punem la loc

        x = M1[j];
        y = M2[j];
        a[x][y] = a[y][x] = 0;
        
        for (int d = 1; d <= n; d++)
            pus[d] = 0;
        
        nr = 0;
        for (int d = 1; d <= n; d++)
        {
            if (pus[d] == 0)
            {
                nr++;
                dfs(d, nr);
            }
        }

        if (nr == NR)
        {
            q++;
            // cout<<x<<' '<<y<<'\n';
        }
        else
            a[x][y] = a[y][x] = 1;
    }

    g << q << '\n';

    f.close();
    g.close();
    return 0;
}
