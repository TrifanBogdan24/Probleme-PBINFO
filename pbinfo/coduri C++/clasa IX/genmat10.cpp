// #219 - GenMat10
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea matricii
    int n = 0, m = 0, a[30][30];

    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 30; j++)
            a[i][j] = 0;
    
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            a[i][j] = n * m - ((i - 1) * m + j) + 1 ;
    
    // afisarea matricii
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
