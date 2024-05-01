// #1750 - Progresie1
#include <iostream>

using namespace std;

int main()
{
    // declarare si initializare variabile
    int a1 = 0, r = 0, n = 0, a[205][205];
    
    for (int i = 0; i < 205; i++)
        for (int j = 0; j < 205; j++)
            a[i][j] = 0;
    
    // citirea datelor
    cin >> a1 >> r >> n;

    // construirea matricii, pe coloane
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            a[i][j] = a1;
            a1 = a1 + r;
        }
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