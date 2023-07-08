// #1313 - Produs_matrice
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("produs_matrice.in");
ofstream g("produs_matrice.out");

int n1, n2, m1, m2, a1[105][105], a2[105][105];
long long p[105][105];

void citire()
{
    f >> n1 >> m1;

    for (int i = 1; i <= n1; i++)
        for (int j = 1; j <= m1; j++)
            f >> a1[i][j];

    n2 = m1;
    f >> m2;
    for (int i = 1; i <= n2; i++)
        for (int j = 1; j <= m2; j++)
            f >> a2[i][j];
}

void Sum(int x, int y)
{
    for (int i = 1; i <= m1; i++)
        p[x][y] += a1[x][i] * a2[i][y];
}

void rez()
{
    for (int i = 1; i <= n1; i++)
        for (int j = 1; j <= m2; j++)
            Sum(i, j);
}

void afis()
{
    for (int i = 1; i <= n1; i++)
    {
        for (int j = 1; j <= m2; j++)
            g << p[i][j] << ' ';
        g << '\n';
    }
}

int main()
{
    citire();
    rez();
    afis();

    f.close();
    g.close();
    return 0;
}
