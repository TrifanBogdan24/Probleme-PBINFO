// #2800 - Chenar1
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, x = 0, a[55][55];
    
    for (int i = 0; i < 55; i++)
        for (int j = 0; j < 55; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    x = a[n][m];
    
    // prima si ultima LINIE iau valoarea ultimulului element
    for (int j = 1; j <= m; j++)
    {
        a[1][j] = x;
        a[n][j] = x;
    }

    // prima si ultima COLOANA iau valoarea ultimulului element
    for (int i = 1; i <= n; i++)
    {
        a[i][1] = x;
        a[i][m] = x;
    }
    
    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
