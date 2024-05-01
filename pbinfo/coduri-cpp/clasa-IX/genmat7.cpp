// #216 - GenMat7
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[30][30];

    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 30; j++)
            a[i][j] = 0;
    
    // citirea
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = 0;
    
    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        for (int j = i + 1; j < n - i + 1; j++)
        {
            a[i][j] = 1;
            a[j][i] = 3;
        }
    }
    
    for (int i = (n + 1) / 2; i <= n; i++)
    {
        for (int j = n - i + 2; j < i; j++)
        {
            a[i][j] = 2;
            a[j][i] = 3;
        }
    }
    
    // afisarea
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
