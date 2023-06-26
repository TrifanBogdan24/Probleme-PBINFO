// #2253 - VacantaDeVara
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("vacantadevara.in");
ofstream g("vacantadevara.out");

int n, v[1005], aux, ok, p;

int main()
{

    f >> n;

    for (int i = 1; i <= n; i++)
        f >> v[i];

    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }

    if (v[1] == 0)
    {
        // prima cifra a unui numar nu poate fi = 0 :)
        ok = 1;
        p = 0;
        for (int i = 1; i <= n; i++)
        {
            if (v[i] != 0 && ok == 1)
            {
                ok = 0;
                p = i;
            }
        }

        for (int i = p; i >= 1; i--)
            g << v[i];
        
        for (int i = p + 1; i <= n; i++)
            g << v[i];
    }
    else
    {
        for (int i = 1; i <= n; i++)
            g << v[i];
    }

    f.close();
    g.close();
    return 0;
}
