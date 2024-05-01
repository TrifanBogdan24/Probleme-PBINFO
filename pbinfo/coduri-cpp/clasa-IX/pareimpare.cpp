// #276 - PareImpare
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("pareimpare.in");
ofstream g("pareimpare.out");

int v[10000], pare[100000], impare[100000], n, m, x;

int main()
{
    while (f>>x)
    {
        v[x]++;
        if (v[x]==1)
        {
            if (x % 2 == 0) pare[++n] = x;
            else impare[++m] = x;
        }

    }

    for (int i = 1; i < m; i++)
        for (int j = i + 1; j <= m; j++)
        if (impare[i] > impare[j]) swap(impare[i], impare[j]);

    for (int i = 1; i <= m; i++) g << impare[i] << " ";
    g << '\n';

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (pare[i] < pare[j]) swap(pare[i], pare[j]);

    for (int i = 1; i <= n; i++) g << pare[i] << " ";

    f.close();
    g.close();
    return 0;
}
