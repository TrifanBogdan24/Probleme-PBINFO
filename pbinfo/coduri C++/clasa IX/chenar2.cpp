// #2825 - Chenar2
#include <iostream>

using namespace std;
int nr;
int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, x = 0, a[105][105];
    
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    cin >> x;
    
    // verifcarea existentei lui x pe prima si utlima coloana
    for (int j = 1; j <= m; j++)
        if (a[1][j] == x || a[n][j] == x)
            nr++;

    // verifcarea existentei lui x pe prima si utlima linie
    for (int i = 1; i <= n; i++)
        if (a[i][1] == x || a[i][m] == x)
            nr++;

    if (nr != 0)
        cout << "DA";
    else
        cout << "NU";
    
    return 0;
}
