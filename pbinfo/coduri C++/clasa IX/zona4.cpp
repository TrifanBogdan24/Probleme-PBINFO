// #1749 - Zona4
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[201][201], S[5], n = 0, Z = 0;
    
    for (int i = 0; i <= 200; i++)
        for (int j = 0; j <= 200; j++)
            a[i][j] = 0;

    for (int i = 0; i <= 4; i++)
        S[i] = 0; 
    
    cin >> n >> Z;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i < j && i + j < n + 1) S[1] += a[i][j];
            else if (i > j && i + j > n +1) S[3] += a[i][j];
            else if (i > j && i + j < n + 1 ) S[4] += a[i][j];
            else if (i < j && i + j > n + 1) S[2] += a[i][j];
        }
    }

    cout << S[Z];
    return 0;
}