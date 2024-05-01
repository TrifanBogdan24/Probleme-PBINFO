// #421 - Graf Partial 1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("graf_partial_1.in");
ofstream g("graf_partial_1.out");

int n, m, a[105][105], x, y, v[105], maxx = -1, minx = 205;

int main()
{

    f >> n;
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;
    
    for (int i = 1; i <= n; i++)
    {
        v[i] = 0;
        for (int j = 1; j <= n; j++)
            v[i] = v[i] + a[i][j];
        
        maxx = max(maxx, v[i]);
        minx = min(minx, v[i]);
    }

    m = 0;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] == minx)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == 1 && v[j] == maxx)
                {
                    m++;
                    a[i][j] = a[j][i] = 0;
                }
            }
        }
    }

    g << m << '\n';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            g << a[i][j] << ' ';
        g << '\n';
    }

    return 0;
}
