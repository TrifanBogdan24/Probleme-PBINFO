// #541 - Lant1
#include <iostream>
#include <fstream>
#include <queue>
#include <vector>
#include <stack>

using namespace std;

ifstream f("lant1.in");
ofstream g("lant1.out");

int n, P, Q, R, rasp[105], t[105], nr, x, y;
bool pus[105];

vector<int> v[105];
queue<int> q;
stack<int> s;

void citire()
{
    f >> n >> P >> Q >> R;
    while (f >> x >> y)
    {
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

void drum(int x, int y)
{
    s.push(y);
    if (x != y)
    {

        drum(x, t[y]);
    }
}
void dfs(int x, int y)
{
    while (!q.empty())
        q.pop();

    for (int i = 1; i <= n; i++)
    {
        t[i] = 0;
        pus[i] = 0;
    }

    pus[x] = 1;
    t[x] = 0;
    q.push(x);

    while (!q.empty())
    {
        int el = q.front();
        vector<int>::iterator it;

        for (it = v[el].begin(); it != v[el].end(); it++)
        {
            if (pus[*it] == 0)
            {
                pus[*it] = 1;
                q.push(*it);
                t[*it] = el;
            }
        }
        q.pop();
    }
}

int main()
{
    citire();
    dfs(P, R);
    drum(P, R);

    while (!s.empty())
    {
        nr++;
        rasp[nr] = s.top();
        s.pop();
    }

    dfs(R, Q);
    drum(R, Q);

    s.pop();
    while (!s.empty())
    {
        nr++;
        rasp[nr] = s.top();
        s.pop();
    }

    g << nr << '\n';
    for (int i = 1; i <= nr; i++)
        g << rasp[i] << ' ';

    if (!nr)
        g << '\n';

    f.close();
    g.close();
    return 0;
}
