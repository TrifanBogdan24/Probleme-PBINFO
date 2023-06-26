// #263 - MaxCif
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("maxcif.in");
ofstream g("maxcif.out");

int main()
{
    // declararea si initializarea variabilelor
    int cif = 0, max_ap = 0, nr_ap[11];

    for (int i = 0; i < 11; i++)
        nr_ap[i] = 0;

    // citirea din fisier si actualizarea vectorului de frecventa
    while (f >> cif)
        nr_ap[cif]++;

    max_ap = 0;
    for (int i = 0; i <= 9; i++)
        if (max_ap < nr_ap[i])
            max_ap = nr_ap[i];
    
    for (int i = 0; i <= 9; i++)
        if (max_ap == nr_ap[i])
            g << i << ' ';
    
    g << '\n';
    f.close();
    g.close();
    return 0;
}
