// #3423 - ctcmax
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, d, x, y, nr_conexa, lmaxx, n1, n2, prim[105], poz[105], nr;
bool pus[105];

vector<int> v1[105], v2[105], rasp[105], aux;
queue<int> q;
stack<int> s;
vector<int>::iterator inc, sf;

void citire()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        v1[x].push_back(y);
        v2[y].push_back(x);
    }
}

void bfs1(int x)
{
    pus[x] = 1;
    for (vector<int>::iterator it = v1[x].begin(); it != v1[x].end(); it++)
    {
        if (pus[*it] == 0)
        {
            pus[*it] = 1;
            bfs1(*it);
        }
    }
    s.push(x);
}

void bfs2(int x)
{

    rasp[nr_conexa].push_back(x);
    pus[x] = 1;
    
    for (vector<int>::iterator it = v2[x].begin(); it != v2[x].end(); it++)
    {
        if (pus[*it] == 0)
        {
            pus[*it] = 1;
            bfs2(*it);
        }
    }
}

int main()
{
    citire();
    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0)
            bfs1(i);
    }
    
    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    
    while (!s.empty())
    {
        if (pus[s.top()] == 0)
        {
            nr_conexa++;
            bfs2(s.top());
        }
        s.pop();
    }

    for (int i = 1; i <= n; i++)
        sort(rasp[i].begin(), rasp[i].end());

    for (int i = 1; i <= nr_conexa; i++)
    {
        n1 = rasp[i].size();
        lmaxx = max(lmaxx, n1);
    }

    nr = 0;
    for (int i = 1; i <= nr_conexa; i++)
    {
        if (rasp[i].size() == lmaxx)
        {
            nr++;
            poz[nr] = i;
            prim[nr] = rasp[i][0];
        }
    }

    for (int i = 1; i < nr; i++)
    {
        for (int j = i + 1; j <= nr; j++)
        {
            if (prim[i] > prim[j])
            {
                swap(prim[i], prim[j]);
                swap(poz[i], poz[j]);
            }
        }
    }

    // cout<<nr_conexa<<'\n';

    for (int i = 1; i <= nr; i++)
    {

        for (vector<int>::iterator it = rasp[poz[i]].begin(); it != rasp[poz[i]].end(); it++)
            cout << *it << ' ';
        cout << '\n';
    }

    return 0;
}