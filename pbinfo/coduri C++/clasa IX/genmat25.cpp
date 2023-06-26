// #2822 - GenMat25
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[25][25];

    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = 0;

    cin >> n;

    // construirea matricii
    for (int i = 1; i <= n; i++)
    {
        a[i][1] = i;
        a[n][i] = n;
    }

    for (int i = 1; i <= n; i++)
        for (int j = 2; j <= n; j++)
            a[i][j] = a[i][j - 1] + a[i + 1][j - 1];

    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
