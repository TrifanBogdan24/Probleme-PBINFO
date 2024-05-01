// #GenMat3 - #208
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, q = 1, a[21][21];

    for (int i = 0; i < 21; i++)
        for (int j = 0; j < 21; j++)
            a[i][j] = 0;

    cin >> n >> m;

    // construirea matricii
    q = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            a[i][j] = q * q;
            q = q + 2;
        }
    }

    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
