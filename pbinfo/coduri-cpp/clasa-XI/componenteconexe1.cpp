// #441 - ComponenteConexe1
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("componenteconexe1.in");
ofstream g("componenteconexe1.out");

int n, m, a[105][105], d, nr, q, rasp[105][105];
bool pus[105];

void dfs(int x)
{

    rasp[nr][0]++;
    rasp[nr][rasp[nr][0]] = x;
    pus[x] = 1;
    for (int i = 1; i <= n; i++)
        if (a[x][i] == 1 && pus[i] == 0)
            dfs(i);
}

int main()
{
    int x = 0, y = 0;
    
    f >> n;
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;
    
    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    
    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0)
        {
            nr++;
            rasp[nr][0] = 0;
            dfs(i);
        }
    }
    
    g << nr - 1 << '\n';

    for (int i = 1; i < nr; i++)
        g << rasp[i][rasp[i][0]] << ' ' << rasp[i + 1][1] << '\n';

    f.close();
    g.close();
    return 0;
}
