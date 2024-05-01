// #29 - Bila
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bila.in");
ofstream g("bila.out");

int n, m, a[1000][1000], e[1000][1000], is, js, Max = -1;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

struct nod {
    int l, c;
};
nod Q[1000];

void lee(int is, int js)
{
    int xx, yy, p, u, x, y;
    p = u = 1;
    Q[1].l = is;
    Q[1].c = js;
    e[is][js] = 1;

    while (p <= u)
    {
        x = Q[p].l;
        y = Q[p].c;

        for (int i = 0; i < 4; i++)
        {
            xx = x + dx[i];
            yy = y + dy[i];

            if (e[xx][yy] == 0 && a[xx][yy] < a[x][y])
            {
                u++;
                Q[u].l = xx;
                Q[u].c = yy;
                e[xx][yy] = e[x][y] + 1;
            }
        }

        p++;
    }
}

void bordare()
{
    for (int j = 0; j <= m + 1; j++)
        e[0][j] = e[n + 1][j] = -1;
    
    for (int i = 0; i <= n + 1; i++)
        e[i][0] = e[i][m + 1] = -1;
}

int main()
{
    f >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];

    f >> is >> js;
    bordare();
    lee(is, js);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (e[i][j] > Max)
                Max = e[i][j];
            // cout<<e[i][j]<<' ';
        }
        // cout<<'\n';
    }
    
    g << Max << '\n';

    f.close();
    g.close();
    return 0;
}
