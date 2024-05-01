// #475 - Lant
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("lant.in");
ofstream g("lant.out");

int n, m, a[105][105], st[105], v[105], p, q, x, y;
bool pus[100];

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';
    g << '\n';
}

void back(int k)
{
    if (k == 1)
    {
        st[k] = p;
        pus[p] = 1;
        back(2);
    }
    else if (k > 1)
    {
        for (int j = 1; j <= n; j++)
        {
            if (pus[j] == 0 && a[st[k - 1]][j])
            {
                pus[j] = 1;

                st[k] = j;
                if (st[k] == q)
                    afis(k);
                else
                    back(k + 1);
                pus[j] = 0;
            }
        }
    }
}

int main()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    
    f >> p >> q;
    /*
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    */

    back(1);

    f.close();
    g.close();
    return 0;
}
