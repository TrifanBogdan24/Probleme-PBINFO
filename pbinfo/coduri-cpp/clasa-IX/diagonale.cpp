// #313 - Diagonale
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, dif = 0, a[21][21];
    int sum_diag_princ = 0;
    int sum_diag_sec = 0;

    for (int i = 0; i < 21; i++)
        for (int j = 0; j < 21; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    // calculul sumelor elementelor de pe cele doua diagonale
    for (int i = 1; i <= n; i++)
    {
        sum_diag_princ += a[i][i];
        sum_diag_sec += a[i][n - i + 1];
    }

    // diferenta in modul
    if (sum_diag_princ > sum_diag_sec)
        dif = sum_diag_princ - sum_diag_sec;
    else
        dif = sum_diag_sec - sum_diag_princ;
    
    cout << dif << '\n';
    return 0;
}
