// #478 - Ciclu
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("ciclu.in");
ofstream g("ciclu.out");

int n, m, a[25][25], x, y, p, st[25];
bool pus[25], OK = 1;

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    f >> p;
}

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';
    OK = 0;
}

void back(int k)
{
    if (OK == 1)
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
                if (a[el][i] == 1)
                {
                    if (pus[i] == 0)
                    {
                        st[k] = i;
                        pus[i] = 1;
                        back(k + 1);
                        pus[i] = 0;
                    }
                    else if (i == p && k > 3)
                    {
                        st[k] = i;
                        afis(k);
                    }
                }
            }
        }
    }
}

int main()
{
    citire();
    back(1);

    f.close();
    g.close();
    return 0;
}
