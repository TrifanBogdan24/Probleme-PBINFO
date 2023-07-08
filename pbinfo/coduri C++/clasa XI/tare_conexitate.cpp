// #583 - Tare conexitate
#include <iostream>
#include <stack>

using namespace std;

int n, m, x, y, a1[105][105], a2[105][105], t, nr;
bool pus[105];
stack<int> s;

void citire()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a1[x][y] = 1;
        a2[y][x] = 1;
    }
}

void dfs_dinsrpe1(int x)
{
    pus[x] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0 && a1[x][i] == 1)
            dfs_dinsrpe1(i);
    }
    s.push(x);
}

void dfs_spre1(int x)
{
    pus[x] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0 && a2[x][i] == 1)
            dfs_spre1(i);
    }
}

int main()
{
    citire();

    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0)
            dfs_dinsrpe1(i);
    }

    for (int i = 1; i <= n; i++)
        pus[i] = 0;

    while (!s.empty())
    {
        if (pus[s.top()] == 0)
        {
            dfs_spre1(s.top());
            nr++;
        }
        s.pop();
    }
    
    cout << nr << '\n';
    return 0;
}
