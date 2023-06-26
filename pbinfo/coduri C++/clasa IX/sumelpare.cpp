// #662 - SumElPare
#include <iostream>

using namespace std;
int v[1000], Max;

int odd_sum_of_line(int n, int m, int a[105][105], int lin)
{
    if (lin > n)
        return -1;      // indicele liniei este in afara matricii

    int s = 0;
    for (int j = 1; j <= n; j++)
        if (a[lin][j] % 2 == 0)
            s += a[lin][j];

    return s;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, I = 0, max_sum = -1, a[105][105];

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;

    // citirea matricii
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    for (int i = 1; i <= n; i++)
    {
        int s = odd_sum_of_line(n, m, a, i);
        if (s > max_sum)
        {
            max_sum = s;
            I = i;
        }
    }

    cout << I << '\n';

    return 0;
}
