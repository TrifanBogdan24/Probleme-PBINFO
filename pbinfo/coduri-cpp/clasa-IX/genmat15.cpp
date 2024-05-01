// #228 - GenMat15
#include <iostream>

using namespace std;

int main()
{
    // declarare si initializare variabile
    int n = 0, m = 0, q = 0, a[20][20];

    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            a[i][j] = 0;
    
    cin >> n >> m;
    q = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = m; j >= 1; j--)
            {
                a[i][j] = q;
                q++;
            }
        }
        else
        {
            for (int j = 1; j <= m; j++)
            {
                a[i][j] = q;
                q++;
            }
        }
    }

    // afisare matrice
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
