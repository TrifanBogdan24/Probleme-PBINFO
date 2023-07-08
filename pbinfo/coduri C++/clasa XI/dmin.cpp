// #1604 - DMin
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

ifstream f("dmin.in");
ofstream g("dmin.out");

int n, m, i, j, x, y, k, lg[105];
bool a[105][105], pus[105];

vector<int> v[105];
queue<int> q;

int dfs(int x, int y)
{
    for (int i = 1; i <= n; i++)
    {
        pus[i] = 0;
        lg[i] = 0;
    }

    while (!q.empty())
        q.pop();

    q.push(x);
    pus[x] = 1;
    lg[x] = 0;

    while (!q.empty())
    {
        int el = q.front();
        vector<int>::iterator it;

        for (it = v[el].begin(); it != v[el].end(); it++)
        {

            if (pus[*it] == 0)
            {
                pus[*it] = 1;
                lg[*it] = lg[el] + 1;

                q.push(*it);
            }
        }

        q.pop();
    }

    return lg[y];
}

void sol()
{

    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    for (int i = 1; i <= n; i++)
        sort(v[i].begin(), v[i].end());

    f >> k;
    for (int i = 1; i <= k; i++)
    {
        f >> x >> y;

        g << dfs(x, y) << '\n';
    }
}

int main()
{
    sol();

    f.close();
    g.close();
    return 0;
}
