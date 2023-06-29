// #693 - Sahara
#include <fstream>

using namespace std;

ifstream f("sahara.in");
ofstream g("sahara.out");

int n, m, q, k, a[1005][1005], x_1, y_1, x_2, y_2, p, mx, nr;

void Fill(int x, int y)
{
    if (a[x][y] >= q)
    {
        nr++;
        a[x][y] = -1;
        Fill(x, y + 1);
        Fill(x + 1, y);
        Fill(x, y - 1);
        Fill(x - 1, y);
    }
}

int main()
{
    f >> n >> m >> q;
    f >> k;
    
    for (int i = 1; i <= k; i++)
    {
        f >> x_1 >> y_1 >> x_2 >> y_2 >> p;
        a[x_1][y_1] += p;
        a[x_2 + 1][y_2 + 1] += p;
        a[x_1][y_2 + 1] -= p;
        a[x_2 + 1][y_1] -= p;
    }
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            a[i][j] += a[i][j - 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            a[i][j] += a[i - 1][j];

    for (int i = 0; i <= n + 1; i++)
        a[i][0] = a[i][m + 1] = -1;
    
    for (int i = 0; i <= m + 1; i++)
        a[0][i] = a[n + 1][i] = -1;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] >= q)
            {
                nr = 0;
                Fill(i, j);
                if (nr > mx)
                    mx = nr;
            }
        }
    }
    
    g << mx << '\n';

    f.close();
    g.close();
    return 0;
}
