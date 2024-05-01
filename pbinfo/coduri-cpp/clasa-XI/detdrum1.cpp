// #643 - DetDrum1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("detdrum1.in");
ofstream g("detdrum1.out");

int n, m, t[105], rad, nod;

void citire()
{
    f >> n >> nod;
    for (int i = 1; i <= n; i++)
    {
        f >> t[i];
        if (t[i] == 0)
            rad = i;
    }
}

void parcurgere(int x)
{
    if (x != rad)
        parcurgere(t[x]);
    g << x << ' ';
}

int main()
{
    citire();
    parcurgere(nod);

    f.close();
    g.close();
    return 0;
}
