// #207 - GenMat2
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

    // fiecare coloana va avea toate elementele egale cu un numar de la n la 1
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = n - j + 1; 

    // anulam ( =0 ) diagonala principala
    for (int i = 1; i <= n; i++)
        a[i][i] = 0;

    // afisam matricea
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
