// #770 - PermCol
#include <iostream>

using namespace std;

void perm_line(int n, int m, int a[105][105], int lin)
{
    if (lin > n)
        return;     // indicele coloanei iese din matrice

    int x = a[lin][1];
    
    for (int j = 1; j < n; j++)
        a[lin][j] = a[lin][j + 1];
    
    a[lin][n] = x;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, a[105][105];

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    // permutarea coloanelor
    for (int i = 1; i <= n; i++)
        perm_line(n ,m, a, i);
    
    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}