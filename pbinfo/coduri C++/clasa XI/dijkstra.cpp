// #588 - Dijkstra
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("dijkstra.in");
ofstream g("dijkstra.out");

int n, m, a[105][105], c[105][105], d[105], p, x, y, cost, ctot, t[105];
bool pus[105];

int inf = 100009;

void citire()
{
    f >> n >> p;
    while (f >> x >> y >> cost)
    {
        a[x][y] = 1;
        c[x][y] = cost;
    }
}

void creare()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (c[i][j] == 0 && i != j)
                c[i][j] = inf;
        }
    }
}

void dijkstra(int nod)
{
    for (int i = 1; i <= n; i++)
    {
        t[i] = 0;
        pus[i] = 0;
        d[i] = inf;
    }

    d[nod] = 0;
    for (int i = 1; i <= n; i++)
    {
        int d_min = inf;
        for (int j = 1; j <= n; j++)
        {
            if (d[j] < d_min && pus[j] == 0)
            {
                d_min = d[j];
                nod = j;
            }
        }

        pus[nod] = 1;
        
        for (int j = 1; j <= n; j++)
        {
            if (d[j] > d[nod] + c[nod][j] && pus[j] == 0)
            {
                d[j] = d[nod] + c[nod][j];
                t[j] = nod;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0)
            g << "-1 ";
        else
            g << d[i] << ' ';
    }
}

int main()
{
    citire();
    creare();

    dijkstra(p);

    f.close();
    g.close();
    return 0;
}
