// #572 - Arma
#include <iostream>

using namespace std;
int main()
{
    // declarea si initializrea variabilelor 
    int n = 0 ,m = 0,k = 0, q = 0, a[1001][1001], v[1000];

    for (int i = 0; i < 1001; i++)
        for (int j = 0; j < 1001; j++)
            a[i][j] = 0;

    for (int i = 0; i < 1001; i++)
        v[i] = 0;

    // citirea datelor
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    for (int d = 1; d <= k; d++)
    {
        cin >> q;
        v[q]++;
        if (v[q] == 1)
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= m; j++)
                    if (a[i][j] == q)
                        for (int P = i; P >= 1; P--)
                            a[P][j] = a[P - 1][j];
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
