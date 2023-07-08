// #1330 - PartitiiMultime
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiimultime.in");
ofstream g("partitiimultime.out");

int n, m, st[1000], a[10000], NR, nr = 0, M[11][11];
bool pus[1000];

void afis()
{
    bool ok;

    for (int i = 1; i <= n; i++)
    {
        ok = 1;
        for (int j = 1; j <= n; j++)
        {
            if (st[j] == i)
            {
                ok = 0;
                g << j;
            }
        }
        
        if (ok == 0)
            g << '*';
        // cout<<st[i]<<' ';
    }
    
    g << '\n';
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 1; i <= nr; i++)
        {
            st[k] = i;
            back(k + 1);
        }

        nr++;
        st[k] = nr;
        back(k + 1);
        nr--;
    }
}

int main()
{
    f >> n;

    st[1] = 1;
    nr = 1;

    back(2);

    f.close();
    g.close();

    return 0;
}
