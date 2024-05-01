// #1395 - MSuma
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("msuma.in");
ofstream g("msuma.out");

int n, m, p, q;
long long a[109][109], b[109][109];

int main()
{
    f >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];
    
    f >> p >> q;
    
    for (int i = 1; i <= q; i++)
        for (int j = 1; j <= q; j++)
            f >> b[i][j];
    
    if (n == p && m == q)
    {
        g << n << ' ' << m << '\n';
    
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
                g << a[i][j] + b[i][j] << ' ';
            g << '\n';
        }
    }

    f.close();
    g.close();

    return 0;
}
