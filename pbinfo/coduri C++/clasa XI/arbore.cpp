// #636 - Arbore

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("arbore.in");
ofstream g("arbore.out");

int n, m, x, y, nod, t[105];
vector<int> v[105];
bool pus[105];

void citire()
{
    f >> n >> nod;
    while (f >> x >> y)
    {
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

void dfs(int x)
{
    pus[x] = 1;
    for (vector<int>::iterator it = v[x].begin(); it != v[x].end(); it++)
    {
        if (pus[*it] == 0)
        {
            t[*it] = x;
            dfs(*it);
        }
    }
}

int main()
{
    citire();
    dfs(nod);
    
    for (int i = 1; i <= n; i++)
        g << t[i] << ' ';

    f.close();
    g.close();
    return 0;
}
