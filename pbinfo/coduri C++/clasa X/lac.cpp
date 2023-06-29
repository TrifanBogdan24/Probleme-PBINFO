// #882 - Lac
#include <iostream>
#include <fstream>

using namespace std;

fstream f("lac.in");
ofstream g("lac.out");

int n, m, a[1005][1005], nrp, NR;
bool ok;

bool inside_matrix(int x, int y)
{
    return ((1 <= x && x <= n) && (1 <= y && y <= m));
}

void Fill(int l, int c, bool &ok)
{
    if (inside_matrix(l, c) && a[l][c] == 1)
    {
        a[l][c] = 0;
        if ((l == 1 || l == n) || (c == 1 || c == m))
            ok = 1;
        Fill(l - 1, c, ok);
        Fill(l + 1, c, ok);
        Fill(l, c - 1, ok);
        Fill(l, c + 1, ok);
    }
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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 1)
            {
                ok = 0;
                NR++;
                Fill(i, j, ok);
                if (ok == 1)
                    nrp++;
            }
        }
    }
    
    g << NR - nrp << " " << nrp << '\n'; /// insule si peninsule
    
    f.close();
    g.close();
    return 0;
}
