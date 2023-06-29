// #838 - Iesire
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("iesire.in");
ofstream g("iesire.out");

int n, m, x, y;
int a[150][150];
bool OK;

void bordare()
{
    for (int i = 0; i <= n + 1; i++)
        a[i][0] = a[i][n + 1] = a[0][i] = a[n + 1][i] = -1;
}

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            f >> a[i][j];
            a[i][j] = -a[i][j];
        }
    }
}

bool inside_matrix(int lin, int col)
{
    return ((1 <= lin && lin <= n) && (1 <= col && col <= m));
}

void Fill(int l, int c, bool &OK)
{
    if (inside_matrix(l, c) && a[l][c] == 0)
    {
        if ((l == 1 || l == n) || (c == 1 || c == n))
            OK = 0;
        else
        {
            a[l][c] = 1;
            Fill(l + 1, c, OK);
            Fill(l - 1, c, OK);
            Fill(l, c + 1, OK);
            Fill(l, c - 1, OK);
        }
    }
}

void Fill_1(int l, int c)
{
    if (a[l][c] == 1)
    {
        a[l][c] = 0;
        Fill_1(l + 1, c);
        Fill_1(l - 1, c);
        Fill_1(l, c + 1);
        Fill_1(l, c - 1);
    }
}

int main()
{
    citire();
    bordare();
    
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        OK = 1;
        Fill(x, y, OK);

        if (OK == 0)
            g << "da";
        else
            g << "nu";
        g << '\n';

        Fill_1(x, y);
    }

    f.close();
    g.close();
    return 0;
}