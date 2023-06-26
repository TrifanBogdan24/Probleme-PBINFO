// #1894 - Floarea
#include <iostream>

using namespace std;
int a[1000][1000];
int main()
{
    int n = 0;
    cin >> n;
    
    int p = n;
    int q = n * 2 + 1;

    for (int r = 1; r <= (q + 1) / 2; r++)
    {
        for (int i = r; i <= q - r + 1; i++)
            a[r][i] = p;
        
        for (int i = r + 1; i <= q - r + 1; i++)
            a[i][q - r + 1] = p;
        
        for (int i = q - r; i >= r; i--)
            a[q - r + 1][i] = p;
        
        for (int i = q - r; i > r; i--)
            a[i][r] = p;
        
        p--;
    }

    // afisarea matricii
    for (int i = 1; i <= q; i++)
    {
        for (int j = 1; j <= q; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
