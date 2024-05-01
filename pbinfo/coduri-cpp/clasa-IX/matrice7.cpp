// #1007 - Matrice7
#include <iostream>
#include <fstream>
using namespace std;
fstream f("matrice7.in");
ofstream g("matrice7.out");
int n, m, i, j;
long long Min[109], Max, a[109][109];

int main()
{
    f >> n >> m;
    f >> a[1][1];
    Max = a[1][1];
    Min[1] = a[1][1];
    for (j = 2; j <= m; j++)
    {
        f >> a[1][j];
        Min[j] = a[1][j];
        Max = max(Max, a[1][j]);
    }

    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            f >> a[i][j];
            if (a[i][j] < Min[j])
                Min[j]=a[i][j];
            
            Max = max(Max, a[i][j]);
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (a[i][j] == Max)
                a[i][j] = Min[j];
            
            g << a[i][j] << ' ';
        }
        g <<'\n';
    }
    return 0;
}
