// #3416 - GenMat22
#include <iostream>

using namespace std;

void fill_zone(int a[61][61], int x, int y, int val)
{
    // (x, y) = coordonatele coltului dreapta-jos

    a[x - 2][y - 2] = val;
    a[x - 2][y] = val;
    a[x - 1][y - 1] = val;
    a[x][y - 2] = val;
    a[x][y] = val;
}

int main()
{
    int n = 0, a[61][61];

    for (int i = 0; i < 61; i++)
        for (int j = 0; j < 61; j++)
            a[i][j] = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            fill_zone(a, i * 3, j * 3, (i - 1) * n + j);

    for (int i = 1; i <= 3 * n; i++)
    {
        for (int j = 1; j <= 3 * n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
