// #3341 - oaste2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("oaste2.in");
ofstream g("oaste2.out");

int n, m, nr, Max = -1, s, nrmin = -1, arie, sol;
int a[150][150];

bool inside_matrix(int x, int y)
{
    return ((1 <= x && x <= n) && (1 <= y && y <= m));
}

void Fill(int l, int c, int &sol, int &arie)
{
    if (a[l][c] != 0)
    {
        sol = sol + a[l][c];
        a[l][c] = 0;
        arie++;

        Fill(l + 1, c, sol, arie);
        Fill(l - 1, c, sol, arie);
        Fill(l, c - 1, sol, arie);
        Fill(l, c + 1, sol, arie);
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
            if (a[i][j] != 0)
            {
                sol = 0;
                arie = 0;
                Fill(i, j, sol, arie);

                if (sol > Max)
                {
                    Max = sol;
                    nrmin = arie;
                }
                else if (sol == Max)
                    nrmin = min(nrmin, arie);
            }
        }
    }
    
    g << Max << ' ' << nrmin;
    g << '\n';

    f.close();
    g.close();
    return 0;
}
