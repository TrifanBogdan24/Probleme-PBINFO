// #2244 - TraseuCalMax
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("traseucalmax.in");
ofstream g("traseucalmax.out");

int n, m, Max = -1, a[15][15], M[15][15];
int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};

struct nod {
    int l, c;
};
nod st[600];

void calc()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == -1)
                M[i][j] = 0;
            else
                M[i][j] = a[i][j];
        }
}

bool inauntru(int I, int C)
{
    return (I >= 1 && I <= n && C >= 1 && C <= m);
}

void back(int x, int y, int pas)
{
    if (x == n && y == m)
    {
        if (pas > Max)
        {
            Max = pas;

            calc();
        }
    }
    else if (a[x][y] == 0 && inauntru(x, y))
    {
        a[x][y] = pas;

        for (int i = 0; i < 8; i++)
            back(x + dx[i], y + dy[i], pas + 1);

        a[x][y] = 0;
    }
}

int main()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f >> a[i][j];
            a[i][j] = 0 - a[i][j];
        }
    }

    back(1, 1, 1);
    M[n][m] = Max;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            g << M[i][j] << ' ';
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
