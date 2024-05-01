// #417 - GradMax
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("gradmax.in");
ofstream g("gradmax.out");

int n, m, x, y, s, nr, v[105], maxx = -1;
int a[105][105];

int main()
{
    f >> n;
    while (f >> x >> y)
    {
        a[x][y] = a[y][x] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        s = 0;
        for (int j = 1; j <= n; j++)
            s += a[i][j];
        // cout<<s<<'\n';
        if (s > maxx)
        {
            maxx = s;
            nr = 1;
            v[nr] = i;
        }
        else if (s == maxx)
        {
            nr++;
            v[nr] = i;
        }
    }

    g << nr << ' ';
    for (int i = 1; i <= nr; i++)
        g << v[i] << ' ';

    g << '\n';
    
    f.close();
    g.close();
    return 0;
}
