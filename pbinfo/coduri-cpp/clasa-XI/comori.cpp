// #395 - Comori
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("comori.in");
ofstream g("comori.out");

int n, m, A[209][209], a[209][209], q1, q2, Q, Max = 0;

int main()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];

    for (int j = 1; j <= m; j++)
        A[1][j] = a[1][j];

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            Q = A[i - 1][j];

            Q = max(Q, A[i - 1][j - 1]);

            Q = max(Q, A[i - 1][j + 1]);

            A[i][j] = Q + a[i][j];
            if (i == n)
                Max = max(Max, Q + a[i][j]);
        }
    }
    
    g << Max << '\n';
    
    /*
    for(i=1;i<=n;i++)
    {for(j=1;j<=m;j++)cout<<A[i][j]<<' ';
        cout<<'\n';
    }*/
    
    f.close();
    g.close();

    return 0;
}
