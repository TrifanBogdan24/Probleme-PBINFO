// #619 - SortLin
#include <iostream>
using namespace std;

int n, m, mat[1000][1000];

int main()
{
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mat[i][j];
    
    for (int lin = 1; lin <= n; lin++)
        for (int i = 1; i < m; i++)
            for (int j = i + 1; j <= m; j++)
                if (mat[lin][i] > mat[lin][j])
                    swap(mat[lin][i], mat[lin][j]);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << mat[i][j] << " ";

        cout << '\n';
    }
    return 0;
}
