// #422 - Graf Partial 2
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("graf_partial_2.in");
ofstream g("graf_partial_2.out");

int n, m, a[105][105], x, y, grad_max = -1, grad[105], nr;
bool pus[105];

int main()
{
    f >> n;

    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;

    for (int i = 1; i <= n; i++)
    {
        grad[i] = 0;
        
        for (int j = 1; j <= n; j++)
            grad[i] = grad[i] + a[i][j];
        
        grad_max = max(grad_max, grad[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (grad[i] == grad_max)
        {

            grad[i] = 0;
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == 1)
                {
                    nr++;
                    a[i][j] = a[j][i] = 0;
                }
            }
        }
    }

    g << nr << '\n';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            g << a[i][j] << ' ';
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
