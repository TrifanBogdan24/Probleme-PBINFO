// # 963 - Bazine
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bazine.in");
ofstream g("bazine.out");

int n, m, nr_c[105], x, y, mine, maxe, maxx;

int main()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
        nr_c[i] = i;
    
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        
        if (nr_c[x] != nr_c[y])
        {
            mine = min(nr_c[x], nr_c[y]);
            maxe = max(nr_c[x], nr_c[y]);

            for (int j = 1; j <= n; j++)
            {
                if (nr_c[j] == maxe)
                    nr_c[j] = mine;
                else if (nr_c[j] > maxe)
                    nr_c[j]--;
            }
        }
    }
    
    maxx = nr_c[1];
    for (int i = 1; i <= n; i++)
        maxx = max(maxx, nr_c[i]);
    
    g << maxx << '\n';
    
    f.close();
    g.close();
    return 0;
}
