// #211 - Spirala
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("spirala.in");
ofstream g("spirala.out");

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, a[30][30];

    for (int i = 0; i < 30; i++)
        for (int j = 0; j < 30; j++)
            a[i][j] = 0;
    
    // citirea din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];

    for (int r = 1; r <= (n + 1) / 2; r++)
    {
        for (int i = r; i <= n - r + 1; i++)
            g << a[r][i] << " ";
        
        for (int i = r + 1; i <= n - r + 1; i++)
            g << a[i][n - r + 1] << " ";
        
        for (int i = n - r; i >= r; i--)
            g << a[n - r + 1][i] << " ";
        
        for (int i = n - r; i > r; i--)
            g << a[i][r] << " ";
    }

    f.close();
    g.close();
    return 0;
}
