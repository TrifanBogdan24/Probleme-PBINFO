// #1707 - Retea
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>

using namespace std;

ifstream f("retea.in");
ofstream g("retea.out");

int n, m, x, y;
bool rasp[105], pus[105];

vector<int> v[105];
queue<int> q;

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

bool dfs(int x)
{
    while (!q.empty())
        q.pop();
    
    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    
    pus[x] = 1;
    
    if (x == 1)
    {
        q.push(x + 1);
        pus[x + 1] = 1;
    }
    else
    {
        q.push(x - 1);
        pus[x - 1] = 1;
    }
    
    while (!q.empty())
    {
        int el = q.front();
        vector<int>::iterator it;

        for (it = v[el].begin(); it != v[el].end(); it++)
        {
            if (pus[*it] == 0 && *it != x)
            {
                pus[*it] = 1;
                q.push(*it);
            }
        }
        q.pop();
    }

    for (int i = 1; i <= n; i++)
        if (pus[i] == 0)
            return 0;
    return 1;
}

int main()
{
    citire();
    for (int i = 1; i <= n; i++)
        g << 1 - dfs(i) << ' ';

    g << '\n';
    f.close();
    g.close();
    return 0;
}
