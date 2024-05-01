// #796 - Eliminare3
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, a[55][55];
    
    for (int i = 0; i < 55; i++)
        for (int j = 0; j < 55; j++)
            a[i][j] = 0;

    // citirea
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // eliminarea ultimei coloane
    for (int i = 1; i <= n; i++)
        for (int j = m - 1; j < m; j++)
            a[i][j] = a[i][j + 1];
    m--;

    // eliminarea ultimei linii
    for (int i = n - 1; i < n; i++)
        for (int j = 1; j <= m; j++)
            a[i][j] = a[i + 1][j];
    n--;

    // afisare
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
