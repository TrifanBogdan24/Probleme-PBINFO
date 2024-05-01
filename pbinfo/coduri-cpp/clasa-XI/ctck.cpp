// #3421 - ctck
#include <iostream>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

int x, y, k, n, m, comp[105], nr;
vector<int> v1[105], v2[105], rasp[105];
queue<int> q;
stack<int> s;
bool pus[105];

void citire()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        v1[x].push_back(y);
        v2[y].push_back(x);
    }
}

void dfs_sprex(int x)
{
    pus[x] = 1;
    for (vector <int> :: iterator it = v1[x].begin(); it != v1[x].end(); it++)
        if (pus[*it] == 0)
            dfs_sprex(*it);
    s.push(x);
}

void dfs_insprex(int x)
{
    rasp[nr].push_back(x);
    pus[x] = 1;
    for (vector <int> :: iterator it = v2[x].begin(); it != v2[x].end(); it++)
        if (pus[*it] == 0)
            dfs_insprex(*it);
}

int main()
{
    citire();
    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0)
            dfs_sprex(i);
    }

    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    nr = 0;
    
    while (!s.empty())
    {
        if (pus[s.top()] == 0)
        {
            nr++;
            dfs_insprex(s.top());
        }
        s.pop();
    }

    for (int i = 1; i <= nr; i++)
    {
        for (vector <int> :: iterator it = rasp[i].begin(); it != rasp[i].end(); it++)
        {
            comp[*it] = rasp[i].size();
        }
    }
    
    cout << comp[k] << '\n';
    return 0;
}
