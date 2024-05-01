// #342 - Soarece
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("soarece.in");
ofstream g("soarece.out");

int n, m, a[15][15], xi, yi, xf, yf, nr = 0;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void back(int x, int y, int pas)
{
    if (x == xf && y == yf)
        nr++;
    else
    { 
        // cout<<x<<"   "<<y<<"   "<<a[x][y]<<'\n';
        if (a[x][y] == 0)
        {
            a[x][y] = pas;

            for (int i = 0; i < 4; i++)
                back(x + dx[i], y + dy[i], pas + 1);

            a[x][y] = 0;
        }
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
    
    f >> xi >> yi;
    f >> xf >> yf;

    for (int i = 0; i <= n + 1; i++)
        a[i][0] = a[i][m + 1] = -1;
    
    for (int j = 0; j <= m + 1; j++)
        a[0][j] = a[n + 1][j] = -1;

    back(xi, yi, 1);

    g << nr << '\n';

    f.close();
    g.close();

    return 0;
}