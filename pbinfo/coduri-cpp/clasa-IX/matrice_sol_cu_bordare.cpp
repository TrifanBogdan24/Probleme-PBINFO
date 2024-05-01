// #81 - Matrice
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, nr = 0, a[25][25];

    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = 0;

    // citirea matricii
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    // bordam matricea cu o linie in sus si una in jos
    for (int i = 0; i <= n + 1; i++)
    {
        a[i][0] = -1;
        a[i][n + 1] = -1;
    }
    
    // bordam matricea cu o coloana in stanga si una in dreapta
    for (int j = 0; j <= n + 1; j++)
    {
        a[0][j] = -1;
        a[n + 1][j] = -1;
    }
    
    // calculul lui nr
    nr  = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] > a[i - 1][j] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i][j + 1])
                nr++;

    cout << nr << '\n';
    return 0;
}
