// #771 - OrdLin
#include <iostream>

using namespace std;

int sum_of_lin(int n, int m, int lin, int a[110][110])
{
    // subprogramul intoarce suma elementelor de pe linia lin
    int s = 0;
    
    for (int j = 1; j <= m ; j++)
        s += a[lin][j];
    
    return s;
}

void swap_lines(int n, int m, int lin1, int lin2, int a[110][110])
{
    for (int j = 1; j <= m; j++)
        swap(a[lin1][j], a[lin2][j]);
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, a[110][110];

    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = 0;
    
    // citirea
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];


    // sortarea liniilor crescator dupa suma elementelor
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (sum_of_lin(n, m, i, a) > sum_of_lin(n, m, j, a))
                swap_lines(n, m, i, j, a);

    // afisarea
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
