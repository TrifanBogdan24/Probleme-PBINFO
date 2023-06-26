// #998 - Matrice6
#include <iostream>
#include <fstream>
using namespace std;

fstream f("matrice6.in");
ofstream g("matrice6.out");

bool line_contains(int n, int a[110][110], int lin ,int x)
{
    // TRUE => elementul x se gaseste pe linia lin din matrice
    for (int j = 1; j <= n; j++)
        if (a[lin][j] == x)
            return 1;

    return 0;
}

void add_to_lines_values(int n, int a[110][110], int lin, int val)
{
    for (int j = 1; j <= n; j++)
        a[lin][j] += val;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[110][110];

    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = 0;

    // citirea datelor din fisier
    f >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];

    
    int min_val = a[1][1];
    int max_val = a[1][1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] < min_val) min_val = a[i][j];
            if (a[i][j] > max_val) max_val = a[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
        if (line_contains(n, a, i, max_val))
            add_to_lines_values(n, a, i, min_val);

    // afisarea
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            g << a[i][j] << " ";
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
