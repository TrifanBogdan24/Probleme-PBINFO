// #385 - SumTri
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sumtri.in");
ofstream g("sumtri.out");

int n, a[109][109], b[109][109], Max;

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            f >> a[i][j];

    for (int i = 1; i <= n; i++)
        b[i][1] = b[i - 1][1] + a[i][1];

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {

            b[i][j] = max(b[i - 1][j], b[i - 1][j - 1]) + a[i][j];
        }
    }

    Max = b[n][1];
    for (int i = 2; i <= n; i++)
        Max = max(Max, b[n][i]);
    
    g << Max << '\n';

    /*
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)cout<<b[i][j]<<' ';
        cout<<'\n';
    }
    */

    f.close();
    g.close();
    return 0;
}
