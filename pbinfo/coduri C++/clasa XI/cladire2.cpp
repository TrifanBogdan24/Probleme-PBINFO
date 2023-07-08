// #394 - Cladire2
#include <iostream>
#include <fstream>


using namespace std;
ifstream f("cladire2.in");
ofstream g("cladire2.out");

int n, m, a[201][201], b[201][201], x, y;
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
    f >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f >> a[i][j];
            b[i][j] = max(b[i - 1][j], b[i][j - 1]) + a[i][j];
        }
    }

    g << b[n][m] << '\n';

    ok = 1;
    x = n;
    y = m;
    drum(x, y);

    f.close();
    g.close();
    return 0;
}
