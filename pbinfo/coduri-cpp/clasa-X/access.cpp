// #866 - Acces
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("acces.in");
ofstream g("acces.out");

int n, m, i, j, M[1050][1050];
int xi, yi;
char c;

int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};

struct nod {
    int l, c;
};

nod Q[1000 * 1000];

bool inside_matrix(int lin, int col)
{
    return ((lin >= 1 && lin <= n) && (col >= 1 && col <= m));
}

void Lee(int xi, int yi)
{
    int xx, yy, x, y, p, u;
    p = u = 1;
    Q[u].l = xi;
    Q[u].c = yi;

    M[xi][yi] = 1;
    
    while (p <= u)
    {
        x = Q[p].l;
        y = Q[p].c;

        for (int i = 0; i < 4; i++)
        {
            xx = x + dx[i];
            yy = y + dy[i];
            if (inside_matrix(xx, yy) == 1 && M[xx][yy] == 0)
            {
                M[xx][yy] = M[x][y] + 1;
                u++;
                Q[u].l = xx;
                Q[u].c = yy;
            }
        }

        p++;
    }
}

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f >> c;
            if (c == '-')
                M[i][j] = 0;
            else if (c == '#')
                M[i][j] = -1;
            else if (c == 'P')
            {
                M[i][j] = 0;
                xi = i;
                yi = j;
            }
        }
    }
}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (M[i][j] > 0)
                M[i][j] = M[i][j] - 1;
            else if (M[i][j] <= 0)
                M[i][j] = -1;
            
            g << M[i][j] << ' ';
        }
        g << '\n';
    }
}

int main()
{
    citire();

    Lee(xi, yi);
    afis();

    f.close();
    g.close();
    return 0;
}
