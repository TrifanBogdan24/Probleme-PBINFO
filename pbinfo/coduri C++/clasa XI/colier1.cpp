// #2256 - colier1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("colier.in");
ofstream g("colier.out");

int n, m, st[1000], Max = -1, rez[10000], GT = 0;
bool pus[10000];

struct nod {
    int cul, grad, poz;
};
nod a[1000];

void calc()
{
    if (GT > Max)
    {
        Max = GT;
        for (int i = 1; i <= m; i++)
            rez[i] = a[st[i]].poz;
    }
}

void back(int k)
{
    if (k > m)
    {
        if (a[st[m]].cul != a[st[1]].cul)
            calc();
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                if (k == 1)
                {
                    GT += a[i].grad;
                    back(k + 1);
                    GT -= a[i].grad;
                }
                else
                {
                    if (a[st[k]].cul != a[st[k - 1]].cul)
                    {
                        GT += a[i].grad;
                        back(k + 1);
                        GT -= a[i].grad;
                    }
                }

                pus[i] = 0;
            }
        }
    }
}

int main()
{
    f >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        f >> a[i].cul >> a[i].grad;
        a[i].poz = i;
    }

    // for(i=1;i<=n;i++)cout<<a[i].cul<<' '<<a[i].grad<<' '<<a[i].poz<<'\n';
    back(1); 
    // cout<<Max<<'\n';
    
    for (int i = 1; i <= m; i++)
        g << rez[i] << ' ';
    
    g << '\n';
    f.close();
    g.close();
    return 0;
}
