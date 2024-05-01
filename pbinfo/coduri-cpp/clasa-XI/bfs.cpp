// #19 - BFS
#include <iostream>
#include <fstream>
#include <queue>
#include <vector>

using namespace std;

ifstream f("BFS.in");
ofstream g("BFS.out");

int n, m, x, y, X, lvl[105], T[105];
bool pus[105], a[105][105];
queue<int> q;
vector<int>::iterator it;
vector<int> V;

void citire()
{
    f >> n >> m >> X;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
}

void bfs(int X)
{

    pus[X] = 1;
    lvl[X] = 1;
    q.push(X);
    
    while (!q.empty())
    {
        g << q.front() << ' ';
        for (int i = 1; i <= n; i++)
        {
            if (a[i][q.front()] == 1 && pus[i] == 0)
            {
                pus[i] = 1;
                T[i] = q.front();
                lvl[i] = lvl[q.front()] + 1;
                q.push(i);
            }
        }
        q.pop();
    }
}

int main()
{
    citire();

    bfs(X);

    f.close();
    g.close();
    return 0;
}
