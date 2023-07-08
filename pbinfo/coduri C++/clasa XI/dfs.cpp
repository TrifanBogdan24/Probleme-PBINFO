// #539 - DFS
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream f("dfs.in");
ofstream g("dfs.out");

int n, m, a[1000005], nr, aux, c, t;
int x, y, q;
vector<int> V[1000005], G[1000005];
bool pus[1000005];

void load2()
{
    f >> n >> m >> q;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
        sort(G[i].begin(), G[i].end());
}

void afis2()
{
    for (int i = 1; i <= n; i++)
    {
        for (auto it : G[i])
            g << it << ' ';
        g << '\n';
    }
}

void dfs1(int x)
{
    pus[x] = 1;
    g << x << ' ';
    for (int i = 0; i < V[x].size(); i++)
        if (pus[i] == 0)
            dfs1(i);
}

void dfs2(int x)
{
    pus[x] = 1;
    g << x << ' ';
    for ( vector<int>::iterator it = G[x].begin(); it != G[x].end(); it++)
        if (pus[*it] == 0)
            dfs2(*it);
}

int main()
{
    load2();
    dfs2(q);

    f.close();
    g.close();
    return 0;
}
