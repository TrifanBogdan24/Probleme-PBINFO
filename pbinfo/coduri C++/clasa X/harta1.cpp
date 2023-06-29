// #1496 - Harta1
#include <iostream>
#include <fstream>

using namespace std;

fstream f("harta1.in");
ofstream g("harta1.out");

int p, n, m, k, nr_departs[15], a[105][105];


void solve1()
{
    int nr0 = 0;    // numarul de elemente din matrice egale cu 0

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (!a[i][j])
                nr0++;
    g << nr0;
}


bool inside_matrix(int x, int y)
{
    return ((1 <= x && x <= n) && (1 <= y && y <= m));
}

void Fill(int x, int y, int val)
{
    if (inside_matrix(x, y) && a[x][y] == val)
    {
        a[x][y] = -1;
        Fill(x - 1, y, val);
        Fill(x + 1, y, val);
        Fill(x, y - 1, val);
        Fill(x, y + 1, val);
    }
}

void solve2()
{
    for (int i = 0; i < 15; i++)
        nr_departs[i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] >= 0)
            {
                int tara = a[i][j];
                nr_departs[tara]++;
                Fill(i, j, tara);
            }
        }
    }

    // aflam numarul maxim de departamente
    int max_deps = nr_departs[1];

    for (int i = 2; i <= k; i++)
        if (nr_departs[i] > max_deps)
            max_deps = nr_departs[i];

    // afisam indicele tarilor care au numarul maxim de departamente
    for (int i = 1; i <= k; i++)
        if (nr_departs[i] == max_deps)
            g << i << ' ';
}

int main()
{
    // citirea din fisier
    f >> p;
    f >> n >> m >> k;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];

    if (p == 1)
        solve1();
   else
        solve2();

    g << '\n';
    f.close();
    g.close();
    return 0;
}
