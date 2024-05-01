// #432 - Taxe
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("taxe.in");
ofstream g("taxe.out");

int n, m, s[1000][1000], a[1000][1000], p, Min = 209 * 109;

int main()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];
    
    s[1][1] = a[1][1];

    for (int i = 1; i <= n; i++)
        s[i][1] = a[i][1];

    for (int j = 1; j <= m; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                s[i][j] = min(s[i][j - 1], s[i + 1][j - 1]) + a[i][j];
            else if (i == n)
                s[i][j] = min(s[i][j - 1], s[i - 1][j - 1]) + a[i][j];
            else
            {
                s[i][j] = min(min(s[i - 1][j - 1], s[i + 1][j - 1]), s[i][j - 1]) + a[i][j];
            }
        }
    }

    for (int i = 1; i <= n; i++)
        Min = min(Min, s[i][m]);
    
    g << Min;
    g << '\n';

    f.close();
    g.close();
    return 0;
}
