// #762 - Identice2
#include <iostream>

using namespace std;

bool identice(int n, int m, int a[105][105], int line1, int line2)
{
    if (line1 > n || line2 > n)
        return 0;

    for (int j = 1; j <= m; j++)
        if (a[line1][j] != a[line2][j])
            return 0;

    return 1;
}

int main()
{
    // declararea si initializarea variabielor
    int n = 0, m = 0, C = 0, a[105][105];

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = 0;
    
    // citirea datelor
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // calculul lui C
    C = 0;
    
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (identice(n, m, a, i, j))
                C++;
    
    cout << C << '\n';
    
    return 0;
}
