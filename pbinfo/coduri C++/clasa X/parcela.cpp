// #1368 - Parcela
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("parcela.in");
ofstream g("parcela.out");

int n, m, nr, Max = -1, arie, NR;
bool a[150][150];

void Fill(int l, int c, int &arie)
{
    if (a[l][c] == 1)
    {
        a[l][c] = 0;
        arie++;
        Fill(l + 1, c, arie);
        Fill(l - 1, c, arie);
        Fill(l, c - 1, arie);
        Fill(l, c + 1, arie);
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
                nr++;
                Fill(i, j, arie);
                if (arie > Max)
                {
                    Max = arie;
                    NR = nr;
                }
            }
        }
    }

    g << nr << ' ' << Max << ' ' << NR;
    g << '\n';

    f.close();
    g.close();
    return 0;
}
