// #1373 - reactivi
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("reactivi.in");
ofstream g("reactivi.out");

int n, m, x, y;

pair<int, int> v[8009];

void citire()
{
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> x >> y;
        v[i] = make_pair(x, y);
    }
}

int main()
{
    citire();

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i].second > v[j].second || v[i].second == v[j].second && v[i].first < v[j].first)
                swap(v[i], v[j]);

    int nr = 1;
    int poz = 1;
    
    for (int i = 2; i <= n; i++)
    {
        if (v[poz].second < v[i].first)
        {
            nr++;
            poz = i;
        }
    }

    g << nr << '\n';

    f.close();
    g.close();
    return 0;
}
