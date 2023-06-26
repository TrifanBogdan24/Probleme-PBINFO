// #774 - ElimLinii
#include <iostream>

using namespace std;

bool is_prime(int x)
{
    // functia intoarce TRUE pentru x numar prim
    // si FALSE pentru x numar neprim

    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;

    return 1;
}

void delete_line(int &n, int m, int lin, int a[110][110])
{
    // stergerea liniei lin din matrice
    for (int i = lin; i < n; i++)
        for (int j = 1; j <= m; j++)
            a[i][j] = a[i + 1][j];

    n--;
}

int main()
{
    // declarare si initializare variabile
    int n = 0, m = 0, j, a[110][110];

    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = 0;

    // citirea
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    // stergerea liniilor care incep cu un numar prim
    int lin = 1;
    while (lin <= n)
    {
        if (is_prime(a[lin][1]))
            delete_line(n, m, lin, a);
        else
            lin++;
    }

    // afisare
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
