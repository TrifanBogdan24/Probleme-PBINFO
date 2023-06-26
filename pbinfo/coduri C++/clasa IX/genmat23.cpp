// #1585 - GenMat23
#include <iostream>

using namespace std;

int main()
{
    int n = 0, a[35][35];

    for (int i = 0; i < 35; i++)
        for (int j = 0; j < 35; j++)
            a[i][j] = 0;

    cin >> n;

    for (int r = 1; r <= (n + 1) / 2; r++)
    {
        if (r % 2 == 1)
        {
            
            for (int i = r; i <= n - r + 1; i++)
                a[r][i] = 1;
            
            for (int i = r + 1; i <= n - r + 1; i++)
                a[i][n - r + 1] = 1;
            
            for (int i = n - r; i >= r; i--)
                a[n - r + 1][i] = 1;
            
            for (int i = n - r; i > r; i--)
                a[i][r] = 1;
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
