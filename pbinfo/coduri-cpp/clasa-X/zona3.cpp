// #1576 - zona3
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("zona3.in");
ofstream g("zona3.out");

int n, m, arie;
bool a[150][150], b[150][150];
int M[150][150];

bool inside_matrix(int x, int y)
{
    return ((1 <= x && x <= n) && (1 <= y && y <= m));
}

void Fill2(int l, int c, int nr)
{
    if (inside_matrix(l, c) && b[l][c] != 0)
    {
        M[l][c] = nr;
        b[l][c] = 0;
        Fill2(l + 1, c, nr);
        Fill2(l - 1, c, nr);
        Fill2(l, c - 1, nr);
        Fill2(l, c + 1, nr);
    }
}

void Fill1(int l, int c, int &arie)
{
    if (inside_matrix(l, c) && a[l][c] != 0)
    {
        arie++;
        a[l][c] = 0;
        b[l][c] = 1;
        Fill1(l + 1, c, arie);
        Fill1(l - 1, c, arie);
        Fill1(l, c - 1, arie);
        Fill1(l, c + 1, arie);
    }
}

int main()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 1)
            {
                arie = 0;
                Fill1(i, j, arie);

                Fill2(i, j, arie);
            }
        }
    }

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
