// #2841 - GenMat27
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int m = 0, n = 0, q = 2, a[25][25];

    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = 0;

    cin >> m >> n;

    // construirea matricii
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (q % 5 == 0)
                q += 2;
            
            a[i][j] = q;
            q += 2;
        }
    }
    // afisarea matricii    
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
