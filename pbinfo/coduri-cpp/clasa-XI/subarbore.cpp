// #641 - Subarbore
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("subarbore.in");
ofstream g("subarbore.out");

int n, m, t[105], nod;
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
    for (int i = 1; i <= n; i++)
        if (pus[i] == 0 && t[i] == x)
            parcurgere(i);
}

int main()
{
    citire();
    parcurgere(nod);
    
    for (int i = 1; i <= n; i++)
        if (pus[i] == 1)
            g << i << ' ';

    g << '\n';
    f.close();
    g.close();
    return 0;
}
