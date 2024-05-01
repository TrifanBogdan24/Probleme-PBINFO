// #218 - GenMat9
#include <iostream>

using namespace std;

int main()
{
    // declarare si intializarea variabilelor
    int n = 0, a[20][20];

    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            a[i][j] = 0;

    cin >> n;

    // construirea chenarulului = marginea matricii
    // = prima si utlima linie si coloana
    for (int i = 1; i <= n; i++)
    {
        a[i][1] = i + 1;
        a[i][n] = i + n;
        a[1][i] = i + 1;
        a[n][i] = n + i;
    }

    // construirea interiorului matricii
    for (int i = 2; i < n; i++)
        for (int j = 2; j < n; j++)
            a[i][j] = a[i - 1][j] + a[i - 1][j + 1] + a[i - 1][j - 1];
    
    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
