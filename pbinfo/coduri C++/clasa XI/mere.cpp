// #550 - Mere
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

ifstream f("mere.in");
ofstream g("mere.out");

int n, m, x, y, mere[1009], a[1009][1009];
bool pus[105];
queue<int> q;
vector<int> v[1009];

void citire()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> mere[i];
    
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;
    
}

int dfs()
{
    int poz;
    int e, s, maxx;

    s = mere[1];
    pus[1] = 1;
    q.push(1);

    while (!q.empty())
    {
        e = q.front();
        maxx = -1;

        for (int i = 1; i <= n; i++)
        {
            if (a[e][i] == 1 && pus[i] == 0)
            {
                if (mere[i] > maxx)
                {
                    maxx = mere[i];
                    poz = i;
                }
            }
        }

        if (maxx != -1)
        {
            s += maxx;
            pus[poz] = 1;
            q.push(poz);
        }
        q.pop();
    }

    return s;
}

int main()
{
    citire();
    g << dfs();

    g << '\n';
    f.close();
    g.close();
    return 0;
}
