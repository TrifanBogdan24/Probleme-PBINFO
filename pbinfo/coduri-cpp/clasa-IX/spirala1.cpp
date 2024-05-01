// #1008 - Spirala1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("spirala1.in");
ofstream g("spirala1.out");

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, N = 1, q = 1, a[105][105], v[105 * 105];

    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = v[(i -1) * 105 + j] = 0;

    // citirea din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];

    while (N * N != n)
        N++;

    for (int r = 1; r <= (N + 1) / 2; r++)
    {
        for (int i = r; i <= N - r + 1; i++)
        {
            a[i][r] = v[q];
            q++;
        }
        
        for (int i = r + 1; i <= N - r + 1; i++)
        {
            a[N - r + 1][i] = v[q];
            q++;
        }
        
        for (int i = N - r; i >= r; i--)
        {
            a[i][N - r + 1] = v[q];
            q++;
        }
        
        for (int i = N - r; i > r; i--)
        {
            a[r][i] = v[q];
            q++;
        }
    }
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
            g << a[i][j] << " ";
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
