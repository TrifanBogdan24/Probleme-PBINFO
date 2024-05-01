// #1322 - PartitiiNr
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiinr.in");
ofstream g("partitiinr.out");

int n, m, a[1000], st[1000], suma;
bool pus[1000];

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';
    g << '\n';
}

void back(int k)
{
    int i;
    if (suma == n)
        afis(k - 1);
    else
    {
        if (k == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                if (!pus[i])
                {
                    pus[i] = 1;
                    st[k] = i;
                    suma += i;
                    if (suma <= n)
                        back(k + 1);
                    suma -= i;
                    pus[i] = 0;
                }
            }
        }
        else
        {
            for (int i = st[k - 1] + 2; i <= n; i++)
            {
                if (!pus[i])
                {
                    pus[i] = 1;
                    suma += i;
                    st[k] = i;
                    if (suma <= n)
                        back(k + 1);
                    pus[i] = 0;
                    suma -= i;
                }
            }
        }
    }
}
int main()
{
    f >> n;

    back(1);

    f.close();
    g.close();

    return 0;
}
