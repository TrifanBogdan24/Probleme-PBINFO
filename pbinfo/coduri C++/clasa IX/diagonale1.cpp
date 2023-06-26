// #783 - Diagonale1
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, s = 0, a[105][105];
    
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;

    // citirea matricii
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    // calculul sumei de pe diagonalele paralele cu cea principala
    for (int j = 1; j <= n; j++)
        s = s + a[j + 1][j] + a[j - 1][j];
    
    cout << s << '\n';

    return 0;
}
