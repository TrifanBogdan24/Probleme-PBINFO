// #413 - Adiacenta1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("adiacenta1.in");
ofstream g("adiacenta1.out");

int n = -1, m, i, j, x, y, d;
bool a[105][105];

int main()
{
    
    while (f >> x >> y)
    {
        a[x][y] = a[y][x] = 1;
        n = max(n, max(x, y));
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            g << a[i][j] << ' ';
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
