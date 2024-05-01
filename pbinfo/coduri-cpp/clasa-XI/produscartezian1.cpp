// ProdusCartezian1 - #1227
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("produscartezian1.in");
ofstream g("produscartezian1.out");

int n, m, nr[100], st[100], a[100];

void back(int p)
{
    for (int i = 1; i <= n; i++)
    {
        st[p] = i;
        if (p == m)
        {
            for (int j = 1; j <= m; j++)
                g << st[j] << ' ';
            g << '\n';
        }
        else
            back(p + 1);
    }
}

int main()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
        a[i] = i;
    
    f >> m;

    back(1);
    
    f.close();
    g.close();

    return 0;
}
