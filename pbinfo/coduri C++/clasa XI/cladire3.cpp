// #433 - Cladire3
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cladire3.in");
ofstream g("cladire3.out");

int n, m, a[1000][1000], M[1000][1000];

int main()
{
    f >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];
    
    M[n][1] = a[n][1];

    for (int j = 2; j <= m; j++)
        M[n][j] = M[n][j - 1] + a[n][j];
    
    for (int i = n - 1; i >= 1; i--)
        M[i][1] = M[i + 1][1] + a[i][1];

    for (int i = n - 1; i >= 1; i--)
        for (int j = 2; j <= m; j++)
            M[i][j] = min(M[i + 1][j], M[i][j - 1]) + a[i][j];

    g << M[1][m] << '\n';

    f.close();
    g.close();
    return 0;
}
