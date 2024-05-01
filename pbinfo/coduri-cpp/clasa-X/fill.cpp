// #837 - Fill
#include <iostream>
#include <fstream>

using namespace std;

fstream f("fill.in");
ofstream g("fill.out");

int n, m, a[150][150];

bool inside_matrix(int lin, int col)
{
    return ((1 <= lin && lin <= n) && (1 <= col && col <= m));
}

void Fill(int l, int c)
{
    if (inside_matrix(l, c) && a[l][c] != 0)
    {
        a[l][c] = 0;
        Fill(l + 1, c);
        Fill(l - 1, c);
        Fill(l, c + 1);
        Fill(l, c - 1);
    }
}

int rasp()
{
    int nr = 0;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 1)
            {
                nr++;
                Fill(i, j);
            }
        }
    }
    return nr;
}

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];
}

int main()
{
    citire();
    g << rasp() << '\n';

    f.close();
    g.close();
    return 0;
}
