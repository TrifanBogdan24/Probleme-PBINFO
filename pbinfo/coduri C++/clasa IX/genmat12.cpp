// #225 - GenMat12
#include <iostream>

using namespace std;

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, k =0, a[30][30];

    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 30; j++)
            a[i][j] = 0;
    
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i <= k && j <= k) a[i][j] = 1;
            else if (i <= k && j > k) a[i][j] = 2;
            else if (i > k && j <= k) a[i][j] = 3;
            else if (i > k && j > k) a[i][j] = 4;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}
