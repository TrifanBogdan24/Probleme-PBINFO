// #658 - SumaLinii
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

    // afisarea sumei de pe fiecare linie
    for (int i = 1; i <= n; i++)
        cout << sum_of_line(n, m, a, i) << ' ';

    cout << '\n';
    return 0;
}
