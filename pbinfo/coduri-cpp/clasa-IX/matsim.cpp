// #786 - MatSim
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[105][105], b[105][105];

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = b[i][j] = 0;
    
    // citirea matricii
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    // construirea matricii simetrice
    for (int i = 0; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = b[i][j];
    
    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << b[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
