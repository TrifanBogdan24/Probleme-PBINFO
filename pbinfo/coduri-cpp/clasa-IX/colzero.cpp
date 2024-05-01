// #314 - ColZero
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("colzero.in");
ofstream g("colzero.out");

bool only_zeros(int m, int n, int a[15][15], int col)
{
    if (col > n)
        return 0;   // indicele coloanei este in afara matricii
    
    for (int i = 1; i <= m; i++)
        if (a[i][col])
            return 0;

    return 1;
}

int main()
{
    // declarare si initializare variabile
    int m = 0, n = 0, NR = 0, a[15][15];

    for (int i = 0; i < 15; i++)
        for (int j =0; j < 15; j++)
            a[i][j] = 0;

    // citirea din fisier
    f >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];

    // calcului lui NR
    NR = 0;
    for (int j = 1; j <= n; j++)
        if (only_zeros(m, n, a, j))
            NR++;

    g << NR;

    f.close();
    g.close();
    return 0;
}
