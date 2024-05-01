// #1507 - grupuri
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("grupuri.in");
ofstream g("grupuri.out");

int n, m, nr;
bool a[150][150];

bool inside_matrix(int x, int y)
{
    return ((1 <= x && x <= n) && (1 <= y && y <= m));
}

void Fill(int l, int c)
{
    if (inside_matrix(l, c) && a[l][c] != 0)
    {
        a[l][c] = 0;
        Fill(l + 1, c);
        Fill(l - 1, c);
        Fill(l, c - 1);
        Fill(l, c + 1);
    }
}

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1)
            {
                nr++;
                Fill(i, j);
            }
        }
    }
    
    g << nr << '\n';

    f.close();
    g.close();
    return 0;
}
