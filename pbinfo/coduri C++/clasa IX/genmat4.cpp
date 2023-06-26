// #213 - GenMat4
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[25][25];

    for (int i = 0; i < 25; i++)
        for (int j = 0; j < 25; j++)
            a[i][j] = 0;
    
    cin >> n;
    
    // construirea matricii
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = (i * j) % 10;

    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
