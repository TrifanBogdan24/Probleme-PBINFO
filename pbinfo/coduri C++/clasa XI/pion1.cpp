// #3245 - pion1
#include <iostream>

using namespace std;

int n, a[109][109], A[109][109], q1, q2, Max = 0;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    /// elementele de pe prima linie din A sunt 0

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 0)
                A[i][j] = A[i - 1][j];
            else
            {
                q1 = A[i - 1][j - 1];
                q2 = A[i - 1][j + 1];

                A[i][j] = max(q1, q2) + 1;
            }
            
            if (i == n)
                Max = max(Max, A[i][j]);
        }
    }

    /*
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)cout<<A[i][j]<<' ';
         cout<<'\n';
    }*/

    cout << Max << '\n';
    return 0;
}
