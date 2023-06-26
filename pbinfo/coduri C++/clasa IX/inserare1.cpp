// #2810 - Inserare1
#include <iostream>

using namespace std;

int n, m;
float a[52][52], v[2510], x;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            v[j] += a[i][j];
        }

    }
    
    m = n;
    for (int i = n; i >= n / 2 + 1; i--)
        for (int j = 1; j <= m; j++)
            a[i + 1][j] = a[i][j];


    n++;

    for (int j = 1; j <= m; j++)
        a[n / 2 + 1][j] = v[j] / float(n - 1);


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";

        cout << '\n';
    }

    return 0;
}
