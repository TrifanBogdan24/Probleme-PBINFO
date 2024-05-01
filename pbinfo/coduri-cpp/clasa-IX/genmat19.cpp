// #812 - GenMat19
#include <iostream>

using namespace std;

int main()
{
    int n = 0, a[20][20];

    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            a[i][j] = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        a[i][1] = 1;
        a[n][i] = i;
    }
    
    for (int i = n - 1; i >= 1; i--)
        for (int j = 2; j <= n; j++)
            a[i][j] = a[i + 1][j] + a[i][j - 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
