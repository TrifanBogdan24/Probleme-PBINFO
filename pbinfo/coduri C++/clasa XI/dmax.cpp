// #126 - DMax
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("dmax.in");
ofstream g("dmax.out");

int n, m, p, q, x, y, t[105], Q[105], rasp[105], nr, fiu[105], L, level[105], maxlvl = -1, R;
bool a[105][105], pus[105], PUS[105];

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    return;
}

void bfs()
{
    int f, l;
    f = l = 1;
    Q[1] = 1;
    pus[1] = 1;
    level[1] = 1;
    
    while (f <= l)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i][Q[f]] == 1 && pus[i] == 0)
            {
                level[i] = 1 + level[Q[f]];
                t[i] = Q[f];
                fiu[Q[f]] = t[i];
                pus[i] = 1;
                l++;
                Q[l] = i;
            }
        }
        f++;
    }
}

void drum(int x)
{

    nr++;
    rasp[nr] = x;
    if (x != q)
        drum(t[x]);
}

int main()
{
    citire();
    bfs();
    
    for (int i = 1; i <= n; i++)
    {
        if (level[i] > maxlvl)
        {
            maxlvl = level[i] - 1;
            R = i;
        }
        // cout<<level[i]<<' ';
    }
    
    g << R << '\n';

    f.close();
    g.close();

    return 0;
}