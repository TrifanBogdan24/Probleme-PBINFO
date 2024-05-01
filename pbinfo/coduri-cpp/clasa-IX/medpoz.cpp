// #234 - Medpoz
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

ifstream f("medpoz.in");
ofstream g("medpoz.out");

int main()
{
    // declarare si initializare variabile
    int a[1000][1000], n = 0, nr = 0, s = 0;

    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            a[i][j] = 0;
    
    // citirea din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];

    // calculul sumei si al numarului de elemente din suma
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i > 1 && j < i && a[i][j] > 0)
            {
                s += a[i][j];
                nr++;
            }
        }
    }

    if (!nr) g << "NU EXISTA";
    else g << setprecision(3) << fixed <<float(s) / float(nr);

    f.close();
    g.close();
    return 0;
}
