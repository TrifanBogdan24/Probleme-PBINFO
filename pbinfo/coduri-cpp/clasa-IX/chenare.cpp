// #286 - Chenare
#include <iostream>

using namespace std;

int main()
{
    // declarare si initializare varaibile
    int n = 0, a[55][55];

    for (int i = 0; i <  55; i++)
        for (int j = 0; j < 55; j++)
            a[i][j] = 0;
    
    cin >> n;

    // construirea matricii
    for (int r = 1; r <= (n + 1) / 2; r++)
    {
        for (int i = r; i <= n - r + 1; i++)
            a[r][i] = r;
        
        for (int i = r + 1; i <= n - r + 1; i++)
            a[i][n - r + 1] = r;
        
        for (int i = n - r; i >= r; i--)
            a[n - r + 1][i] = r;
        
        for (int i = n - r; i > r; i--)
            a[i][r] = r;
    }

    // afisare matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
