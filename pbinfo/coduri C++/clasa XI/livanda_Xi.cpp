// #3256 - Livanda_XI
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("livada_xi.in");
ofstream g("livada_xi.out");

int n, a[109][109], b[109][109], Min;
bool ok = 1;

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            f >> a[i][j];

    for (int j = 1; j <= n; j++)
        b[n][j] = a[n][j] + b[n][j - 1];
    
    for (int i = n; i >= 1; i--)
        b[i][1] = a[i][1] + b[i + 1][1];

    for (int i = n - 1; i >= 1; i--)
        for (int j = 2; j <= i; j++)
            b[i][j] = min(b[i + 1][j], b[i][j - 1]) + a[i][j];

    Min = b[1][1];
    /*
    for(i=1;i<=n;i++)
    {for(j=1;j<=i;j++)cout<<b[i][j]<<' ';
        cout<<'\n';
    }
    */

    for (int i = 2; i <= n; i++)
        Min = min(Min, b[i][i]);
    
    g << Min << '\n';

    f.close();
    g.close();
    return 0;
}
