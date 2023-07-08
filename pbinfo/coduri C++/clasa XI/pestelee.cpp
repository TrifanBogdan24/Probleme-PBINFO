// #3346 - pestelee
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("pestelee.in");
ofstream g("pestelee.out");

int n, m, q, x_1, y_1, x_2, y_2, a[510][510], nr, b[510][510], NR, P = 10007, c;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

struct nod {
    int l, c;
};

nod Q[505 * 505];

void citire()
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

    f >> x_1 >> y_1 >> x_2 >> y_2;
    f >> q;
}

void bordare()
{
    for (int i = 0; i <= n + 1; i++)
        a[i][0] = a[i][m + 1] = -1;
    
    for (int j = 0; j <= m + 1; j++)
        a[0][j] = a[n + 1][j] = -1;
}

void lee()
{
    int p, u, x, y, xx, yy;
    
    p = u = 1;
    Q[p].l = x_1;
    Q[p].c = y_1;
    b[x_1][y_1] = 1;
    a[x_1][y_1] = 1;
    
    while (p <= u)
    {
        x = Q[p].l;
        y = Q[p].c;

        for (int i = 0; i < 4; i++)
        {
            xx = x + dx[i];
            yy = y + dy[i];

            if (a[xx][yy] == 0)
            {
                a[xx][yy] = a[x][y] + 1;
                b[xx][yy] = (b[xx - 1][yy] % P + b[xx][yy - 1] % P + b[xx + 1][yy] % P + b[xx][yy + 1] % P) % P;
                u++;
                Q[u].l = xx;
                Q[u].c = yy;
            }
        }
        p++;
    }
    /*
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)cout<<a[i][j]<<' ';
        cout<<'\n';
    }
    */
}

int main()
{
    citire();
    bordare();
    lee();
    
    if (q == 1)
        g << a[x_2][y_2];
    else
        g << b[x_2][y_2];

    g << '\n';
    f.close();
    g.close();
    return 0;
}
