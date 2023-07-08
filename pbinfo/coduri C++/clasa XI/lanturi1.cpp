// #477 - Lanturi1
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

ifstream f("lanturi1.in");
ofstream g("lanturi1.out");

int n, m, x, y, p, q, r, st[105], a[105][105];
bool pus[105];
vector<int> v[105];

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }

    f >> p >> q >> r;
}

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
        back(k + 1);
    }
    else
    {
        int el = st[k - 1];
        
        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[el][i] == 1)
            {
                if (i == q)
                {
                    if (pus[r] == 0)
                    {
                        st[k] = q;
                        pus[q] = 1;
                        afis(k);
                        pus[q] = 0;
                    }
                }
                else
                {
                    st[k] = i;
                    pus[i] = 1;
                    back(k + 1);
                    pus[i] = 0;
                }
            }
        }
    }
}

int main()
{
    citire();
    if (p > q)
        swap(p, q);

    back(1);

    f.close();
    g.close();
    return 0;
}
