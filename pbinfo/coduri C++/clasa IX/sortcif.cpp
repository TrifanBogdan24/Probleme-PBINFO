// #130 - SortCif
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sortcif.in");
ofstream g("sortcif.out");

int sum_cif(int x)
{
    // subprogramul returneaza suma cifrelor unui numar
    int s = 0;
    
    while (x)
    {
        s += x % 10;
        x /= 10;
    }

    return s;
}

int main()
{
    // declarea si initializare variabilelor
    int n = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // citirea din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];
    
    
    // sortarea crescatoare dupa suma cifrelor
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (sum_cif(v[i]) > sum_cif(v[j]))
            {
                swap(v[i], v[j]);
            }
        }
    }

    // afisarea in fisier
    for (int i = 1; i <= n; i++)
        g << v[i] << " ";
    g << '\n';

    f.close();
    g.close();
    return 0;
}
