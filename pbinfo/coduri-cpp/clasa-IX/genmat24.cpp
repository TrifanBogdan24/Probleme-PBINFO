// #2791 - GenMat24
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[105][105], v[105];
    
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = v[i] = 0;

    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // construirea, pe coloan, a matricii
    for (int j = 1; j <= n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 1; i <= n; i++)
                a[i][j] = v[i];
        }
        else
        {
            for (int i = n; i >= 1; i--)
                a[i][j] = v[n - i + 1];
        }
    }

    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << ' ';
    }

    return 0;
}
