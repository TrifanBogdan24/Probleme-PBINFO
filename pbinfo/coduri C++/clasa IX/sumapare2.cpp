// #767 - SumaPare2
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m  = 0, S = 0, a[105][105];
    
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;
    
    // citirea matricii
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // calculul sumei elementelor pare din matrice
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] % 2 == 0)
                S += a[i][j];
        
    cout << S << '\n';
    return 0;
}
