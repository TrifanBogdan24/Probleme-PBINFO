// #647 - Subarbore2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("subarbore2.in");
ofstream g("subarbore2.out");

int n, m, t[105], v[105], x, y, nod, s = 0;
bool pus[105];

void citire()
{
    f >> n >> nod;

    for (int i = 1; i <= n; i++)
        f >> t[i];
    
    for (int i = 1; i <= n; i++)
        f >> v[i];
}

void parcurgere(int x)
{
    s += v[x];
    pus[x] = 1;
    for (int i = 1; i <= n; i++)
        if (t[i] == x && pus[i] == 0)
            parcurgere(i);
}

int main()
{
    citire();
    parcurgere(nod);
    
    g << s << '\n';

    f.close();
    g.close();
    return 0;
}
