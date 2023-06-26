// #794 - Serpuire
#include <iostream>

using namespace std;

int main()
{
    int a[30][30], n = 0, i = 0, j = 0, lin = 0, col = 0;
    bool p = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];

    cout << a[1][1] << " ";

    for (i = 2; i < n; i++)
    {
        //partea de sus a diagonalei secundare
        if (p == 1)
        {
            p = 0;
            col = 0;
            for (lin = i; lin >= 1; lin--)
            {
                // urca
                col++;
                cout << a[lin][col] << " ";
            }
        } else {
            p = 1;
            lin = 1;
            for (col = i; col >= 1; col--)
            {
                // coboara
                cout << a[lin][col] << " " ;
                lin++;
            }
        }
    }

    if (n % 2 == 0)
    {
        //diagonala secundara
        p = 0;
        for (i = 1; i <= n; i++)
            cout << a[n - i + 1][i] << " ";
    }else {
        p = 1;
        for (i = 1; i <= n; i++)
            cout << a[i][n - i + 1] << " ";
    }

    for (j = 2; j < n; j++)
    {
        //partea de jos a diagonalei secundare
        if (p == 1)
        {
            p = 0;
            lin = n;
            for (col = j; col <= n; col++)
            {
                //urca
                cout << a[lin][col] << " ";
                lin--;
            }
        } else {
            p = 1;
            lin = j;
            for (col = n; col >= j; col--)
            {
                //coboara
                cout << a[lin][col] << " ";
                lin++;
            }
        }
    }

    cout << a[n][n] << " ";
    return 0;
}
