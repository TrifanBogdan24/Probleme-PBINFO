// #479 - LantMaxim
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("lantmaxim.in");
ofstream g("lantmaxim.out");

int n, m, a[105][105], st[105], v[105], p, q, x, y, maxx = -1, rez[105];

bool pus[100];

void afis(int k)
{

    if (k > maxx)
    {
        maxx = k;
        for (int i = 1; i <= k; i++)
            rez[i] = st[i];
    }
    else if (k == maxx)
    {
        int idx = 1;
        while (st[idx] == rez[idx])
            idx++;
        
        if (st[idx] < rez[idx])
        {
            for (int i = 1; i <= k; i++)
                rez[i] = st[i];
        }
    }
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
    back(1);
    for (int i = 1; i <= maxx; i++)
        g << rez[i] << ' ';
    
    g << '\n';
    f.close();
    g.close();
    return 0;
}
