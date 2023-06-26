// #316 - MinCol2
#include <iostream>

using namespace std;

int min_of_matrix(int m, int n, int a[25][25])
{
    // functia returneaza valoarea minima a matricii
    int minx = a[1][1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] < minx)
                minx = a[i][j];

    return minx;
}

bool column_contains(int m, int n, int a[25][25], int col, int x)
{
    if (col > n)
        return 0;   // coloana nu se afla in matrice

    for (int i = 1; i <= m; i++)
        if (a[i][col] == x)
            return 1;

    return 0;
}

void replace_all_in_column(int m, int n, int a[25][25], int col, int x)
{
    if (col > n)
        return;     // coloana nu se afla in matrice

    for (int i = 1; i <= n; i++)
        a[i][col] = x;
}

int main()
{
    int m = 0, n = 0, a[25][25];

    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = 0;

    // citirea datelor
    cin >> m >> n;
    
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // coloanele ce contin valoarea minima vor avea doar valoarea minima
    int min_val = min_of_matrix(m, n, a);

    for (int j = 1; j <= n; j++)
        if (column_contains(m, n, a, j, min_val))
            replace_all_in_column(m, n, a, j, min_val);

    // afisare
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
