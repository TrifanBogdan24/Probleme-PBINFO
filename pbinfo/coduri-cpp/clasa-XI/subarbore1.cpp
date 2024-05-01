// #646 - Subarbore1

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

ifstream f("subarbore1.in");
ofstream g("subarbore1.out");

int n, m, t[105], nod;
bool frunza[105], pus[105];
vector<int> v[105];

void citire()
{
    f >> n >> nod;
    for (int i = 1; i <= n; i++)
    {
        f >> t[i];
        if (t[i] != 0)
        {
            frunza[t[i]] = 1;
            v[t[i]].push_back(i);
        }
    }
}

void parcurgere(int x)
{
    pus[x] = 1;
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

    for (int i = 1; i <= n; i++)
        if (pus[i] == 1 && frunza[i] == 0)
            g << i << ' ';

    f.close();
    g.close();
    return 0;
}
