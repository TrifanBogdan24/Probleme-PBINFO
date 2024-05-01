// #992 - GenMat20
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[20][20];

    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            a[i][j] = 0;
    
    cin >> n;

    for (int i = 1; i <= n; i++)
        a[1][i] = i;
    
    // permutarea liniei anterioare
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < n; j++)
            a[i][j] = a[i - 1][j + 1];
        a[i][n] = a[i - 1][1];
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
