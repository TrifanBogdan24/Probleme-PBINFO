// #2269 - MaximPar
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("maximpar.in");
ofstream g("maximpar.out");

int n, nr_aparitii = 0, maxim_par = -2, v[205];

int main()
{
    // citirea datelor
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];

    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 0)
        {
            if (v[i] == maxim_par) nr_aparitii++;
            else if (v[i] > maxim_par)
            {
                maxim_par = v[i];
                nr_aparitii = 1;
            }
        }
    }

    if (nr_aparitii) g << maxim_par << " " << nr_aparitii;
    else g << -1;

    f.close();
    g.close();
    return 0;
}