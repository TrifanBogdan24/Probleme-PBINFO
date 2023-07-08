// #431 - Graf complet
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("graf_complet.in");
ofstream g("graf_complet.out");

int n, m, a[105][105], ok, q, v[105];

int main()
{
    f >> q;

    for (int d = 1; d <= q; d++)
    {
        f >> n;
        m = 0;
        
        for (int i = 1; i <= n; i++)
        {
            v[i] = 0;
            for (int j = 1; j <= n; j++)
            {
                f >> a[i][j];
                
                if (j < i && a[i][j] == 1)
                {
                    v[i]++;
                    m++;
                }
            }
        }

        if (m * 2 == n * (n - 1))
            g << "DA";
        else
            g << "NU";
        
        g << '\n';
    }

    f.close();
    g.close();

    return 0;
}
