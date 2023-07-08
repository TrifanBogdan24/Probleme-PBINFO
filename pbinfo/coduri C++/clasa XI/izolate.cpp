// #430 - Izolate
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("izolate.in");
ofstream g("izolate.out");

int n, m, x, y, s, nr, v[105];
int a[105][105];

int main()
{
    f >> n;
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;
    for (int i = 1; i <= n; i++)
    {
        s = 0;
        for (int j = 1; j <= n; j++)
            s += a[i][j];
        if (s == 0)
        {
            nr++;
            v[i] = 1;
        }
    }
    
    g << nr << ' ';
    for (int i = 1; i <= n; i++)
        if (v[i] == 1)
            g << i << ' ';

    g << '\n';
    f.close();
    g.close();
    return 0;
}
