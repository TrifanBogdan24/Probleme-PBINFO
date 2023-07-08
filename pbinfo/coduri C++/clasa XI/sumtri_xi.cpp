// #3259 - SumTri_XI
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sumtri_xi.in");
ofstream g("sumtri_xi.out");

int n, a[109][109], b[109][109], Max;

int main()
{
    f >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            f >> a[i][j];

    for (int j = n; j >= 1; j--)
        b[n][j] = a[n][j] + b[n][j + 1];
    
    Max = b[n][1];
    for (int i = n - 1; i >= 1; i--)
    {
        b[i][i] = a[i][i] + b[i + 1][i + 1];
        
        for (int j = i - 1; j >= 1; j--)
            b[i][j] = max(b[i + 1][j + 1], b[i][j + 1]) + a[i][j];
        
        Max = max(Max, b[i][1]);
    }
    
    g << Max << '\n';

    /*
    for(i=1;i<=n;i++)
    {for(j=1;j<=i;j++)cout<<b[i][j]<<' ';
        cout<<'\n';
    }
    */

    f.close();
    g.close();
    return 0;
}
