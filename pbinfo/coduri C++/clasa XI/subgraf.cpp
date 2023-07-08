// #418 - Subgraf
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("subgraf.in");
ofstream g("subgraf.out");

int n, m, x, y, a[105][105], v[105], s;

bool prime(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;
    
    return 1;
}

int main()
{
    f >> n;
    v[1] = 1;
    
    for (int i = 2; i * i <= n; i++)
        if (v[i] == 0 && prime(i) == 1)
            for (int j = 2; j <= n / i; j++)
                v[i * j] = 1;

    while (f >> x >> y)
        if (v[x] == 1 && v[y] == 1)
            a[x][y] = a[y][x] = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            s += a[i][j];
    
    g << s << '\n';

    f.close();
    g.close();

    return 0;
}
