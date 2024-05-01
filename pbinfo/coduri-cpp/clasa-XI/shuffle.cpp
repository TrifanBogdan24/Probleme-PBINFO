// #205 - Shuffle
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream f("shuffle.in");
ofstream g("shuffle.out");

int st[11], n, x[11];
bool OK = 1;
bool pus[11];

struct nod {
    int st, dr, val;
};
nod v[11];

void afis()
{
    for (int i = 1; i <= n; i++)
        g << v[st[i]].val << ' ';
    
    g << '\n';
    OK = 0;
}

bool poziti(int x1, int x2)
{
    int idx = 1, poz1 = 0, poz2 = 0;

    while (idx <= n)
    {
        if (x[idx] == x1)
            poz1 = idx;
        
        if (x[idx] == x2)
            poz2 = idx;
        
        if (poz1 != 0 && poz2 != 0)
            break;

        idx++;
    }

    return !(poz1 - poz2 == 1 || poz2 - poz1 == 1);
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                if (k > 1)
                {
                    if (poziti(st[k - 1], st[k]) == 1)
                        back(k + 1);
                }
                else
                    back(k + 1);
                pus[i] = 0;
            }
        }
    }
}

int main()
{
    f >> n;

    for (int i = 1; i <= n; i++)
    {
        f >> v[i].val;
        x[i] = v[i].val;
        v[i].st = i - 1;
        v[i].dr = i + 1;
    }

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i].val > v[j].val)
                swap(v[i], v[j]);
    
    // for(i=1;i<=n;i++)cout<<v[i].val<<' '<<v[i].st<<' '<<v[i].dr<<'\n';
    back(1);
    if (OK == 1)
        g << "nu exista";

    f.close();
    g.close();

    return 0;
}
