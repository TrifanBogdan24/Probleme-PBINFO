// #764 - Cirese
#include <iostream>

using namespace std;

int sum_in_matrix(int n, int m, int a[110][110], int i1, int j1, int i2, int j2)
{
    int s = 0;
    for (int i = i1; i <= i2; i++)
        for (int j = j1; j <= j2; j++)
            s += a[i][j];

    return s;
}

int main()
{
    int n = 0, m = 0, k = 0, i1 = 0, j1 = 0, i2 = 0, j2 = 0;
    int s = 0, sum_max = -1, a[110][110], sum[110][110];
    
    for (int i = 0; i < 110; i++)
        for (int j = 0; j < 110; j++)
            a[i][j] = sum[i][j] = 0;

    cin >> n >> m >> k;
    
    // citirea matricii
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    // construirea matricii de sume partiale
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + a[i][j];

    sum_max = -1;
    for (int i = 1; i <= k; i++)
    {
        cin >> i1 >> j1;
        cin >> i2 >> j2;
        
        s = sum[i2][j2] - sum[i1 - 1][j2] - sum[i2][j1 - 1] + sum [i1 - 1][j1 -1];
        
        // cout << '\n'<<sum_in_matrix(n , m, a, i1, j1, i2, j2) << " = " << s << '\n';
        
        if (s > sum_max)
            sum_max = s;
    }

    cout << sum_max << '\n';
    return 0;
}
