// #212 - MaxMinMatrice
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("maxminmatrice.in");
ofstream g("maxminmatrice.out");

int min_of_line(int lin, int m, int n, int a[25][25])
{
    int min_el = a[lin][1];

    for (int i = 2; i <= n; i++)
        if (a[lin][i] < min_el)
            min_el = a[lin][i];

    return min_el;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, a[25][25], max_of_mins = 0, minx = 0;
    
    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = 0;

    // citirea din fisier
    f >> m >> n;    // m linii si n coloane

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];

    // calcul pentru raspuns
    max_of_mins = min_of_line(1, m, n, a);
    for (int i = 1; i <= m; i++)
    {
        minx = min_of_line(i, m, n, a);
        if (minx > max_of_mins)
            max_of_mins = minx;
    }

    g << max_of_mins << '\n';

    f.close();
    g.close();    
    return 0;
}
