// #474 - VerifLant
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("veriflant.in");
ofstream g("veriflant.out");

int n, m, a[105][105], x, y, q, d, nr, v[105];
bool ok, Ok;

int main()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    f >> q;
    
    for (int d = 1; d <= q; d++)
    {
        f >> nr;
        for (int i = 1; i <= n; i++)
            v[i] = 0;
        
        ok = 1;
        Ok = 1;

        f >> x;
        v[x]++;
        
        for (int i = 2; i <= nr; i++)
        {
            y = x;
            f >> x;
            if (a[x][y] == 0)
                ok = 0;
            else
            {
                v[x]++;
                if (v[x] > 1)
                    Ok = 0;
            }
        }
        
        if (ok == 0)
            g << "NU";
        else if (Ok == 0)
            g << "NEELEMENTAR";
        else if (Ok == 1)
            g << "ELEMENTAR";
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
