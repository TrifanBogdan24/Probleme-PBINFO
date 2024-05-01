// #419 - Subgraf1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("subgraf1.in");
ofstream g("subgraf1.out");

int n, m, v[105], x, y, minx = 200, a[105][105];

int main()
{
    f >> n;
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;
    
    for (int i = 1; i <= n; i++)
    {
        v[i] = 0;
        for (int j = 1; j <= n; j++)
            v[i] += a[i][j];
        minx = min(minx, v[i]);
    }
    
    m = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] != minx)
        {
            for (int j = 1; j < i; j++)
            {
                if (a[i][j] == 1)
                    m++;
            }
        }
        else
            for (int j = 1; j <= n; j++)
                a[i][j] = a[j][i] = 0;
    }
    
    g << m << '\n';
    f.close();
    g.close();
    return 0;
}
