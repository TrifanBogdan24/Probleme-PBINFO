// #644 - DetDrum2
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

ifstream f("detdrum2.in");
ofstream g("detdrum2.out");

int n, t[105], p, q, rad, lvl[105], radk = -1;
bool pus1[105], pus2[105], pus[105];
queue<int> Q;

void citire()
{
    f >> n >> p >> q;
    for (int i = 1; i <= n; i++)
    {
        f >> t[i];
        if (t[i] == 0)
            rad = i;
    }
}

void dfs(int nod)
{
    Q.push(nod);
    pus[nod] = 1;
    lvl[nod] = 1;
    
    while (!Q.empty())
    {
        int e = Q.front();
        for (int i = 1; i <= n; i++)
        {
            if (t[i] == e && pus[i] == 0)
            {
                pus[i] = 1;
                Q.push(i);
                lvl[i] = lvl[e] + 1;
            }
        }
        Q.pop();
    }
}

void parcurgere1(int nod)
{
    pus1[nod] = 1;
    if (nod != rad)
        parcurgere1(t[nod]);
}

void parcurgere2(int nod)
{
    pus2[nod] = 1;
    if (nod != rad)
        parcurgere2(t[nod]);
}

void drum1(int x, int y) /// drum de la x la y
{
    g << x << ' ';
    if (x != y)
        drum1(t[x], y);
}

void drum2(int x, int y) /// drum de la x la y
{

    if (t[x] != y)
        drum2(t[x], y);
    g << x << ' ';
}

int main()
{
    citire();

    dfs(rad);
    parcurgere1(p);

    parcurgere2(q);

    radk = -1;
    for (int i = 1; i <= n; i++)
    {

        if (pus1[i] == pus2[i] && pus1[i] == 1)
        {
            if (radk == -1)
                radk = i;
            else
            {
                if (lvl[i] > lvl[radk])
                    radk = i;
            }
        }
    }

    drum1(p, radk);
    drum2(q, radk);

    f.close();
    g.close();
    return 0;
}
