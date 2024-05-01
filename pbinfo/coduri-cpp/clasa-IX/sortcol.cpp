// #620 - SortCol
#include <iostream>
using namespace std;

int n, m, mat[1000][1000];

int main()
{
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> mat[i][j];

    for (int col = 1; col <= m; col++)
        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                if (mat[i][col] < mat[j][col])
                    swap(mat[i][col], mat[j][col]);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << mat[i][j] << " ";
        
        cout << '\n';
    }

    return 0;
}
