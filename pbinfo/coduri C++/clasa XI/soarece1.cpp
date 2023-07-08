// #43 - Soarece1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("soarece1.in");
ofstream g("soarece1.out");

int n, m, a[20][20], xi, xf, yi, yf, M[20][20], nr = 0;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

bool OK = 1;
char c;

struct nod {
    int l, c;
};
nod st[10000];

void afis()
{
    int i, j;
    if (OK == 1)
    {
        OK = 0;
        for (i = 1; i <= nr; i++)
            M[st[i].l][st[i].c] = i;
        M[xf][yf] = nr + 1;
    }
}

void back(int x, int y, int val)
{
    if (OK == 1)
    {

        if (x == xf && y == yf)
            afis();
        else if (a[x][y] == 0)
        {
            nr++;
            st[nr].l = x;
            st[nr].c = y;
            // cout<<x<<' '<<y<<'\n';
            val++;
            a[x][y] = val;

            for (int i = 0; i < 4; i++)
                back(x + dx[i], y + dy[i], val);
            
            val--;
            a[x][y] = 0;
            nr--;
        }
    }
}

int main()
{
    f >> n >> m;
    f.get();
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f >> c;
            if (c == '_')
                a[i][j] = 0;
            else if (c == '#')
                a[i][j] = -1;
            else if (c == 'S')
            {
                xi = i;
                yi = j;
                a[i][j] = 0;
            }
            else if (c == 'B')
            {
                xf = i;
                yf = j;
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i <= n + 1; i++)
        a[i][0] = a[i][m + 1] = -1;
    
    for (int j = 0; j <= m + 1; j++)
        a[0][j] = a[n + 1][j] = -1;

    back(xi, yi, 0);
    
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
