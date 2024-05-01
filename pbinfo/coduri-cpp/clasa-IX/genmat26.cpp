// #2835 - GenMat26
#include <iostream>

using namespace std;

int main()
{

    // declararea si initializarea variabilelor
    int n = 0, v[25], a[25][25];
    
    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = v[i] = 0;

    // citirea
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // prima linie ia valorile vectorului
    for (int j = 1; j <= n; j++)
        a[1][j] = v[j];

    // permutarea la dreapta a liniilor
    for (int i = 2; i <= n; i++)
    {
        a[i][1] = a[i - 1][n];
        for (int j = 2; j <= n; j++)
            a[i][j] = a[i - 1][j - 1];
    }

    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    
    return 0;
}
