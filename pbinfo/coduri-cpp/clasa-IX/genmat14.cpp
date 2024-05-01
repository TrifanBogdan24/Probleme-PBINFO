// #227 - GenMat14
#include <iostream>

using namespace std;

int main()
{
    int n = 0, a[16][16];

    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 16; j++)
            a[i][j] = 0;

    cin >> n;

    for (int j = 1; j <= n; j++)
        a[n][j] = j;

    for (int i = n - 1; i >= 1; i--)
    {
        a[i][1] = a[i + 1][1] + a[i + 1][2];
        
        for (int j = 2; j <= i; j++)
            a[i][j] = a[i + 1][j - 1] + a[i + 1][j] + a[i + 1][j + 1];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
