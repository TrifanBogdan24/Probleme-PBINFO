// #437 - Conex
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("conex.in");
ofstream g("conex.out");

int n, m, a[105][105], q, x, y;
bool pus[105], sell[105];

void dfs(int x, int lvl)
{
    q++;

    pus[x] = 1;
    for (int i = 1; i <= n; i++)
        if (a[x][i] == 1 && pus[i] == 0)
            dfs(i, lvl + 1);
}

int main()
{
    f >> n;
    
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;
    
    for (int i = 1; i <= n; i++)
        pus[i] = 0;
    
    q = 0;
    dfs(1, 1);
    
    if (q != n)
        g << "NU";
    else
        g << "DA";
    
    g << '\n';
    f.close();
    g.close();
    return 0;
}
