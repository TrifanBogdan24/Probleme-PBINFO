// #544 - Partial
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

ifstream f("partial.in");
ofstream g("partial.out");

int n, m, x, y, a[205][205], nr;
bool pus[205];

vector<int>::iterator it;
queue<int> q;

void citire()
{
    f >> n;
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;

    return;
}

bool bfs()
{
    while (!q.empty())
        q.pop();
    
    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    
    pus[1] = 1;
    q.push(1);
    
    while (!q.empty())
    {
        int el = q.front();
        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[el][i] == 1)
            {
                pus[i] = 1;
                q.push(i);
            }
        }
        q.pop();
    }

    for (int i = 1; i <= n; i++)
        if (pus[i] == 0)
            return 0;
    return 1;
}

void sol()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            if (a[i][j] == 1 && !(nr == m / 2))
            {
                a[i][j] = a[j][i] = 0;
                if (bfs() == 1)
                    nr++;
                else
                    a[i][j] = a[j][i] = 1;
            }
        }
    }
    return;
}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            g << a[i][j] << ' ';
        g << '\n';
    }
}

int main()
{
    citire();
    m = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < i; j++)
            if (a[i][j] == 1)
                m++;

    sol();
    afis();

    f.close();
    g.close();
    return 0;
}