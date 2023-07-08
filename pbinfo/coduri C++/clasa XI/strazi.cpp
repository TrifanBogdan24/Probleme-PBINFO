// #1488 - Strazi
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream f("strazi.in");
ofstream g("strazi.out");

int n, m, poz = -1;
float x, maxx, nr, v[105], maxviz = -1;

int main()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
    {
        f >> m >> x;
        maxx = x;
        nr = 1;
        
        for (int j = 2; j <= m; j++)
        {
            f >> x;
            if (x > maxx)
            {
                maxx = x;
                nr++;
            }
        }

        v[i] = float(nr) / float(m);
        g << setprecision(3) << fixed << v[i] << '\n';
        
        if (v[i] > maxviz)
        {
            maxviz = v[i];
            poz = i;
        }
    }

    g << poz << '\n';

    f.close();
    g.close();
    return 0;
}
