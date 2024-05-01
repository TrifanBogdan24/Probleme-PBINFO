// #804 - ColEgale
#include <iostream>

using namespace std;

bool same_value_column(int m, int n, int a[55][55], int col)
{
    // functia returneaza TRUE daca coloana 'col' contine toate elementele identice

    if (col > n)
        return 0;   // indicele coloanei este in afara matricei

    for (int i = 2; i <= m; i++)
        if (a[i][col] != a[i - 1][col])
            return 0;

    return 1;
}

int main()
{
    // declararea si initializarea variabilelor
    int m = 0, n = 0, ok = 0, a[55][55];

    for (int i = 0; i < 55; i++)
        for (int j = 0; j < 55; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> m >> n;
    
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    
    for (int j = 1; j <= n; j++)
    {
        if (same_value_column(m, n, a, j))
        {
            cout << a[1][j] << " ";
            ok = 1;
        }
    }

    if (!ok)
        cout << "nu exista";
    
    cout << "\n";
    return 0;
}
