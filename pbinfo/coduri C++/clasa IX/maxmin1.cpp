// #278 - MaxMin1
#include <iostream>
using namespace std;
int n, m, i, j, MAX, C, v[109], x[109];

int main()
{
    cin>>n;
    for (i = 1;i <= n; i++) cin >> v[i];
    cin >> m >> x[i];
    MAX = x[i];
    for (i = 2; i <= m; i++)
    {
        cin >> x[i];
        MAX = max(MAX, x[i]);
    }
    for (i = 1; i <=n; i++)
        if (v[i] > MAX)
            C++;

    cout << C;
    return 0;
}
