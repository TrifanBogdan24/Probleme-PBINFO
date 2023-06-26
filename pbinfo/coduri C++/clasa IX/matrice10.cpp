// #2807 - Matrice10
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, a[55][55];

    for (int i = 0; i < 55; i++)
        for (int j = 0; j < 55; j++)
            a[i][j] = 0;

    // citirea matricii
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // aflarea minimelor de pe prima si ultima coloana
    int idx1 = 1, idx2 = 1;
    int min1 = a[1][1];
    int min2 = a[1][m];

    for (int i = 1; i <= n; i++)
    {
        if (a[i][1] < min1)
        {
            min1 = a[i][1];
            idx1 = i;
        }

        if (a[i][m] < min2)
        {
            min2 = a[i][m];
            idx2 = i;
        }
    }

    // interschimbarea minimelor
    int aux = a[idx1][1];
    a[idx1][1] = a[idx2][m];
    a[idx2][m] = aux;

    // afisarea matricii noi    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
