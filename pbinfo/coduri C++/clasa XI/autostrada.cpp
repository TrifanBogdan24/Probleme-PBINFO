// #2354 - autostrada
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

ifstream f("autostrada.in");
ofstream g("autostrada.out");

int n, m, x, y, nr;
bool a[105][105], pus[105];
queue<int> q;
struct muchie {
    int nod1, nod2;
};
muchie rasp[105];

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
}

bool dfs()
{
    while (!q.empty())
        q.pop();

    for (int i = 1; i <= n; i++)
        pus[i] = 0;

    q.push(1);
    pus[1] = 1;

    while (!q.empty())
    {
        int e = q.front();
        for (int i = 1; i <= n; i++)
        {
            if (a[e][i] == 1 && pus[i] == 0)
            {
                q.push(i);
                pus[i] = 1;
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

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i][j] == 1)
            {
                a[i][j] = a[j][i] = 0;
                if (dfs() == 0)
                {
                    nr++;
                    rasp[nr].nod1 = i;
                    rasp[nr].nod2 = j;
                }
                a[i][j] = a[j][i] = 1;
            }
        }
    }
    
    g << nr << '\n';
    for (int i = 1; i <= nr; i++)
        g << rasp[i].nod1 << ' ' << rasp[i].nod2 << '\n';
    
    f.close();
    g.close();
    return 0;
}
