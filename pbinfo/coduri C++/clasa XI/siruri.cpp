// #204 - Siruri
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("siruri.in");
ofstream g("siruri.out");

int v[20], st[20], n, m;
bool pus[30];

void afis()
{
    for (int i = 1; i <= m; i++)
        g << v[st[i]] << ' ';
    g << '\n';
}

void back(int k, int m)
{
    int i;
    if (k > m)
        afis();
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pus[i])
            {
                st[k] = i;
                pus[i] = 1;
                if (k > 1)
                {
                    if (abs(v[st[k]] - v[st[k - 1]] <= 2))
                    {
                        if (!(k >= 2 && st[k] < st[k - 1]))
                            back(k + 1, m);
                    }
                }
                else if (!(k >= 2 && st[k] < st[k - 1]))
                    back(k + 1, m);

                pus[i] = 0;
            }
        }
    }
}
int main()
{
    f >> n >> m;
    
    for (int i = 1; i <= n; i++)
        v[i] = st[i] = i;
    
    // for(i=1;i<=n;i++)cout<<v[i]<<' ';
    back(1, m);
    
    f.close();
    g.close();

    return 0;
}
