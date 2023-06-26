// #568 - Pod
#include <iostream>

using namespace std;
int n, i, m, j, a[1007][1007], Min[1007];
long long S;

int main()
{
    cin >> n >> m;
    for (j = 1; j <= m; j++)
    {
        cin >> a[1][j];
        Min[j] = a[1][j];
    }

    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            Min[j] = min(Min[j], a[i][j]);
        }
    }

    for (j = 1; j <= m; j++)
        S += Min[j];
    
    cout<<S;
    return 0;
}
