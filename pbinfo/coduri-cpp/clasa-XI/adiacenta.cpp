// #412 - Adiacenta
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("adiacenta.in");
ofstream g("adiacenta.out");
int n, m, i, j, x, y, d;
bool a[105][105];

int main()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            g << a[i][j] << ' ';
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
