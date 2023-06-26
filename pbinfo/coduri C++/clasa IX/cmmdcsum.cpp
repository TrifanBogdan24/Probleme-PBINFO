// #780 - Cmmdcsumum
#include <iostream>

using namespace std;

int cmmdc(int x, int y)
{
    // subprogramul intoarce cel mai mare divizor comun a doua numere

    while (x != y)
    {
        if (x > y)
            x -= y;
        else
            y -= x;
    }

    return x;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[21][21];
    int sum1 = 0;   // suma elementelor dedesubtul diagonalei principale
    int sum2 = 0;   // suma elementelor deasupra diagonalei principale
    
    for (int i = 0; i < 21; i++)
        for (int j = 0; j < 21; j++)
            a[i][j] = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    // calculul sumelor
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            sum1 += a[i][j];
            sum2 += a[j][i];
        }
    }

    cout << cmmdc(sum1, sum2) << '\n';
    return 0;
}
