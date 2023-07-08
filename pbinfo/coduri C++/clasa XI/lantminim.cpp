// #484 - LantMinim
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("lantminim.in");
ofstream g("lantminim.out");

int n, m, p, q, x, y, t[105], Q[105], rasp[105], nr, fiu[105];
bool a[105][105], pus[105], PUS[105];

void citire()
{
    f >> n >> p >> q;
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;
}

void bfs()
{
    int f, l;
    f = l = 1;
    Q[1] = q;
    pus[q] = 1;

    while (f <= l)
    {
        for (int i = 1; i <= n; i++)
        {
            if (a[i][Q[f]] == 1 && pus[i] == 0)
            {
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

void drum1()
{
    int x = p;

    while (x != q)
    {
        // cout<<x<<' ';
        nr++;
        rasp[nr] = x;
        x = t[x];
    }

    nr++;
    rasp[nr] = x;

    g << nr << '\n';
    for (int i = 1; i <= nr; i++)
        g << rasp[i] << ' ';
}

int main()
{
    citire();

    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    
    bfs();
    drum(p);
    
    g << nr << '\n';
    for (int i = 1; i <= nr; i++)
        g << rasp[i] << ' ';

    if (!nr)
        g << '\n';

    f.close();
    g.close();
    return 0;
}