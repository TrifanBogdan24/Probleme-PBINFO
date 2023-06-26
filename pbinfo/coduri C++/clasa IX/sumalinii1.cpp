// #659 - SumaLinii1
#include <iostream>

using namespace std;

int sum_of_line(int n, int m, int a[105][105], int lin)
{
    if (lin > n)
        return -1; // indicele liniei iese din matrice

    int s = 0;

    for (int j = 1; j <= m; j++)
        s += a[lin][j];

    return s;
}

int max_of_line(int n, int m, int a[105][105], int lin)
{
    if (lin > n)
        return -1; // indicele liniei iese din matrice

    int max_el = a[lin][1];

    for (int j = 2; j <= m; j++)
        if (a[lin][j] > max_el)
            max_el = a[lin][j];

    return max_el;
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

    for (int i = 1; i <= n; i++)
        cout << (sum_of_line(n, m, a, i) - max_of_line(n, m, a, i)) << ' ';

    cout << '\n';
    return 0;
}
