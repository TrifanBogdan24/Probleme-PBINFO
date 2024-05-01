// #650 - kNivel
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("knivel.in");
ofstream g("knivel.out");

int n, m, t[105], niv, lvl[105], nod;
bool pus[105];
vector<int> v[105];

void citire()
{
    f >> n >> niv;
    for (int i = 1; i <= n; i++)
    {
        f >> t[i];
        if (t[i] == 0)
            nod = i;
        else
        {
            v[i].push_back(t[i]);
            v[t[i]].push_back(i);
        }
    }
}

void dfs(int x)
{
    pus[x] = 1;
    for (int i = 0; i < v[x].size(); i++)
    {
        if (pus[v[x][i]] == 0)
        {
            pus[v[x][i]] = 1;
            lvl[v[x][i]] = lvl[x] + 1;
            dfs(v[x][i]);
        }
    }
}

int main()
{
    citire();
    lvl[nod] = 1;
    dfs(nod);

    for (int i = 1; i <= n; i++)
        if (lvl[i] == niv)
            g << i << ' ';

    g << '\n';
    f.close();
    g.close();
    return 0;
}
