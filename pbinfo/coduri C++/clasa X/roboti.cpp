// #864 - Roboti
#include <iostream>
#include <fstream>

using namespace std;

fstream f("roboti.in");
ofstream g("roboti.out");

int n, m, a[1500][1500], xi, yi, xf, yf, i, j;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

struct nod {
    int l, c;
};
nod Q[1005 * 1500];

bool inside_matrix(int lin, int col)
{
    return ((lin >= 1 && lin <= n) && (col >= 1 && col <= m));
}

int Lee(int xi, int yi)
{
    int x = 0, y = 0, xx = 0, yy = 0, p = 0, u = 0;
    bool ok = 1;
    
    p = u = 1;
    Q[u].l = xi;
    Q[u].c = yi;

    a[xi][yi] = 1;

    while (p <= u && ok == 1)
    {
        x = Q[p].l;
        y = Q[p].c;

        for (int i = 0; i < 4; i++)
        {
            xx = x + dx[i];
            yy = y + dy[i];
            
            if (inside_matrix(xx, yy) == 1 && a[xx][yy] == 0)
            {
                a[xx][yy] = a[x][y] + 1;
                u++;
                Q[u].l = xx;
                Q[u].c = yy;
                if (xx == xf && yy == yf)
                    ok = 0;
            }
        }

        p++;
    }
    
    if (ok == 1)
        return -1;
    else
        return a[xf][yf] - 1;
}

int main()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            f >> a[i][j];
            a[i][j] = 0 - a[i][j];
        }

    f >> xi >> yi >> xf >> yf;

    if (a[xi][yi] == -1 || a[xf][yf] == -1)
        g << "-1";
    else
        g << Lee(xi, yi);

    g << '\n';
    f.close();
    g.close();
    return 0;
}
