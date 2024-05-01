// #855 - Piramida2
#include <iostream>

using namespace std;
int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[105][105];
    
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;
    
    cin >> n;
    int m = (n + 1) / 2;    // indicile liniei care taie simetric matricea la jumatate
    int x = 1;              // valoarea de pe coloana din mijlocul matricii
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m - x; j++)
            a[i][j] = 0;
        
        for (int j = m - x + 1; j <= m; j++)
            a[i][j] = x - m + j;

        for (int j = m + 1; j <= m + x - 1; j++)
            a[i][j] = x + m - j;
        
        for (int j = m + x; j <= n; j++)
            a[i][j]  = 0;

        if (i < m)
            x++;
        else
            x--;
    }

    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
