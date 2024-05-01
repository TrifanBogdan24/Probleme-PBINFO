// #788 - Oglindire
#include <iostream>

using namespace std;

bool is_prime(int x)
{
    // subprogramul (functia) intoarce 1 daca numarul este prima
    // si 0 altfel

    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;
    
    return 1;
}

void swap_line(int n, int m, int l, int a[110][110])
{
    for (int i = 1; i <= m / 2; i++)
        swap(a[l][i], a[l][m - i + 1]);
}

int main()
{
    // initializarea si declararea variabilelor
    int n = 0, m = 0, a[110][110];
    
    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = 0;

    // citirea
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // interschimbarea liniilor care incep cu un element prim
    for (int i = 1; i <= n; i++)
        if (is_prime(a[i][1]))
            swap_line(n, m, i, a);

    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
