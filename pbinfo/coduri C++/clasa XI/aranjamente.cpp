// #196 - Aranjamente
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("aranjamente.in");
ofstream g("aranjamente.out");

int n, m, st[1000], v[1000];
bool pus[1000];

void afis()
{
    for (int i = 1; i <= m; i++)
        g << v[st[i]] << ' ';
    g << '\n';
}

void back(int k)
{
    if (k > m)
        afis();
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                back(k + 1);
                pus[i] = 0;
            }
        }
    }
}

int main()
{
    f >> n >> m;
    
    for (int i = 1; i <= n; i++)
        v[i] = i;
    
    back(1);
    
    f.close();
    g.close();

    return 0;
}
