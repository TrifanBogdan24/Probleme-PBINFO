// #648 - SubarboreNumarare

#include <iostream>
#include <fstream>

using namespace std;

ifstream f("subarborenumarare.in");
ofstream g("subarborenumarare.out");

int n, m, t[105], nod, nr;
bool pus[105];

void citire()
{
    f >> n >> nod;
    for (int i = 1; i <= n; i++)
        f >> t[i];
}

void parcurgere(int x)
{
    pus[x] = 1;
    nr++;
    for (int i = 1; i <= n; i++)
    {
        if (pus[i] == 0 && t[i] == x)
            parcurgere(i);
    }
}

int main()
{
    citire();
    parcurgere(nod);
    
    g << nr << '\n';

    f.close();
    g.close();
    return 0;
}
