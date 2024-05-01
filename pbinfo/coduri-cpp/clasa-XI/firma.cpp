// #591 - Firma
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("firma.in");
ofstream g("firma.out");

int n, m, cost[109][109], val, x, y, c, d[109], mine, NOD;
bool pus[109];
int inf = 999999999;

void ad_infinit()
{
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
            cost[i][j] = cost[j][i] = inf;
    }
}

void citire()
{
    f >> n >> m;
    ad_infinit();
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y >> c;
        cost[x][y] = cost[y][x] = c;
    }
}

int dijkstra(int nod)
{
    int d_min, ctot;

    for (int i = 1; i <= n; i++)
    {
        pus[i] = 0;
        d[i] = inf;
    }
    d[nod] = 0;
    ctot = 0;
    
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
        ctot += d[nod];

        for (int j = 1; j <= n; j++)
        {
            if (d[j] > d[nod] + cost[nod][j] && pus[j] == 0)
            {
                d[j] = d[nod] + cost[nod][j];
            }
        }
    }
    return ctot;
}

int main()
{
    citire();
    mine = dijkstra(1);
    NOD = 1;
    
    for (int i = 2; i <= n; i++)
    {
        val = dijkstra(i);

        if (val < mine)
        {
            mine = val;
            NOD = i;
        }
    }
    
    g << NOD << '\n';
    f.close();
    g.close();
    return 0;
}
