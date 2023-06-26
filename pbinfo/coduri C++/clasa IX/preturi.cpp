// #526 - Preturi
#include <iostream>

using namespace std;

int min_of_column(int n,int m, int a[105][105], int col)
{
    if (col > m)
        return -1;
    
    int min_val = -1;

    for (int i = 1; i <= n; i++)
        if (a[i][col] != -1 && (a[i][col] < min_val || min_val == -1))
            min_val = a[i][col];
    return min_val;
}

int min_sum(int n, int m, int a[105][105], int price[105])
{
    int s = 0;

    for (int j = 1; j <= m; j++)
    {
        int min_col = min_of_column(n, m, a, j);

        if (min_col == -1)
            return -1;

        s = s + min_col * price[j];
    }

    return s;
}

int main()
{
    // declararea si initialziarea variabilelor
    int n = 0, m = 0, v[105], a[105][105];
    
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = v[i] = 0;

    // citirea
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> v[i];

    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    cout << min_sum(n, m, a, v) << '\n';

    return 0;
}
