// #1384 - Cladire5
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cladire5.in");
ofstream g("cladire5.out");

int n, m, a[201][201], b[201][201], S;
bool ok = 1;

void drum(int x, int y)
{
    if (x * y != 1)
    {
        if (b[x][y] == b[x - 1][y] + a[x][y])
            drum(x - 1, y);
        else
            drum(x, y - 1);
    }

    g << x << ' ' << y << '\n';
}

int main()
{
    f >> n >> m >> S;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];

    for (int j = m; j >= 1; j--)
        b[1][j] = a[1][j] + b[1][j + 1];

    for (int i = 2; i <= n; i++)
        b[i][m] = a[i][m] + b[i - 1][m];

    for (int i = 2; i <= n; i++)
        for (int j = m - 1; j >= 1; j--)
            b[i][j] = min(b[i - 1][j], b[i][j + 1]) + a[i][j];

    g << (S - b[n][1]) << '\n';

    f.close();
    g.close();

    return 0;
}