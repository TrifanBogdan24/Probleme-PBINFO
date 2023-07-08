// #414 - ListaVecini
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream f("listavecini.in");
ofstream g("listavecini.out");

vector<int> G[1000];
vector<int>::iterator it;

int n, m, x, y, nr, rasp[1000], a[105][105];

int main()
{
    f >> n;
    while (f >> x >> y)
    {
        if (a[x][y] == 0)
        {
            G[x].push_back(y);
            G[y].push_back(x);
            a[x][y] = a[y][x] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        nr = 0;
        for (it = G[i].begin(); it != G[i].end(); ++it)
        {
            nr++;
            rasp[nr] = *it;
        }

        g << nr << ' ';
        for (int j = 1; j < nr; j++)
            for (int d = j + 1; d <= nr; d++)
                if (rasp[j] > rasp[d])
                    swap(rasp[j], rasp[d]);

        for (int j = 1; j <= nr; j++)
            g << rasp[j] << ' ';
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
