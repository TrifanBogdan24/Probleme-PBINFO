// #1278 - ProdusCartezian2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("produscartezian2.in");
ofstream g("produscartezian2.out");

int n, nr[100], st[100], a[100], m;

void back(int p)
{
    for (int i = 1; i <= nr[p]; i++)
    {
        st[p] = i;
        
        if (p == n)
        {
            for (int j = 1; j <= n; j++)
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
        f >> nr[i];
    
    back(1);
    
    f.close();
    g.close();
    
    return 0;
}
