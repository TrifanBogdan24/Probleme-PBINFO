// #353 - Spectacole
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("spectacole.in");
ofstream g("spectacole.out");

int n, m, x, y, oracurenta, nr, poz;

pair<int, int> v[109];

void citire()
{
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> x >> y;
        v[i] = make_pair(x, y);
    }
}

void sortare()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (v[i].second > v[j].second)
                swap(v[i], v[j]);
        }
    }
}

int main()
{
    citire();
    sortare();
    nr = 1;
    poz = 1;
    oracurenta = v[poz].second;
    
    int idx = 1;
    
    while (idx <= n)
    {
        poz = idx;
        while (v[poz].first < oracurenta)
            poz++;
        oracurenta = v[poz].second;
        nr++;
        idx = poz;
    }
    
    g << nr - 1 << '\n';

    f.close();
    g.close();
    return 0;
}
