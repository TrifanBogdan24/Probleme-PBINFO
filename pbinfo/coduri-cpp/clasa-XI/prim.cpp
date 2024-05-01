// #590 - Prim
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("prim.in");
ofstream g("prim.out");

int n, m, p, x, y, a[105][105], c[105][105], d[105], t[105];
int inf = 10000;
bool pus[105];

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y >> p;
        a[x][y] = a[y][x] = 1;
        c[x][y] = c[y][x] = p;
    }
}

void prim(int x)
{
    int nod, d_min, ct;
    ct = 0;
    
    for (int i = 1; i <= n; i++)
    {
        d[i] = inf;
        t[i] = 0;
        pus[i] = 0;
    }

    d[x] = 0;
    for (int i = 1; i <= n; i++)
    {
        d_min = inf;
        for (int j = 1; j <= n; j++)
        {
            if (d[j] < d_min && pus[j] == 0)
            {
                d_min = d[j];
                nod = j;
            }
        }
        
        pus[nod] = 1;
        ct = ct + d[nod];

        for (int j = 1; j <= n; j++)
        {
            if (d[j] > c[nod][j] && pus[j] == 0)
            {
                d[j] = c[nod][j];
                t[j] = nod;
            }
        }
    }
    
    g << ct << '\n';
    for (int i = 1; i <= n; i++)
        g << t[i] << ' ';
}

void creare()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (c[i][j] == 0)
                c[i][j] = c[j][i] = inf;
        }
    }
}

int main()
{
    citire();
    creare();

    prim(1);

    f.close();
    g.close();
    return 0;
}
