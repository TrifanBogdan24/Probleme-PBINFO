// #324 - PartitiiNumar4
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiinumar4.in");
ofstream g("partitiinumar4.out");

int n, m, a[10000], st[10000], suma = 0;

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        g << a[st[i]] << ' ';
    g << '\n';
}

void back(int k)
{
    if (k <= (n / a[1]))
    {
        if (k == 1)
        {
            for (int i = 1; i <= m; i++)
            {
                st[k] = i;
                suma += a[i];
                if (suma == n)
                    afis(k);
                else if (suma < n)
                    back(k + 1);

                suma -= a[i];
            }
        }
        else
        {
            for (int i = st[k - 1]; i <= m; i++)
            {
                st[k] = i;
                suma += a[i];
                if (suma == n)
                    afis(k);
                else if (suma < n)
                    back(k + 1);

                suma -= a[i];
            }
        }
    }
}

int main()
{
    f >> n >> m;

    for (int i = 1; i <= m; i++)
        f >> a[i];
    
    for (int i = 1; i < m; i++)
        for (int j = i + 1; j <= m; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);

    back(1);

    f.close();
    g.close();

    return 0;
}
