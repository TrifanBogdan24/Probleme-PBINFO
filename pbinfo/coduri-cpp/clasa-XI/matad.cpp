// #2707 - matad
#include <iostream>
using namespace std;

int n, a[105][105];
bool ok = 1;

bool matrix()
{

    for (int i = 1; i <= n; i++)
        if (a[i][i])
            return 0;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j < i; j++)
            if (a[i][j] != a[j][i])
                return 0;

    return 1;
}

int main()
{
    cin >> n;
    ok = 1;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] < 0 || a[i][j] > 1)
                ok = 0;
        }
    }

    if (ok == 1)
        cout << matrix();
    else
        cout << ok;
    
    cout << '\n';
    return 0;
}
