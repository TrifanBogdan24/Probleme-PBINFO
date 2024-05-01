// #392 - Cladire
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cladire.in");
ofstream g("cladire.out");

int n, m, nr;
unsigned long long int a[1009][1009];

int main()
{
    f >> n >> m;
    
    for (int i = 1; i <= n; i++)
        a[i][1] = 1;
    
    for (int j = 1; j <= m; j++)
        a[1][j] = 1;

    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= m; j++)
            a[i][j] = a[i - 1][j] % 9901 + a[i][j - 1] % 9901;

    g << (a[n][m] % 9901) << '\n';

    f.close();
    g.close();
    return 0;
}
