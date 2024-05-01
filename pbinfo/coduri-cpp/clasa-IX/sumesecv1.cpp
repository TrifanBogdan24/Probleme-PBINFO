// #2921- SumeSecv1
#include <iostream>

using namespace std;

int n, m, I, J, i;
long long Max, v[500000];

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i-1];
    }
    cin>>m;

    for (i = 1; i <= m; i++)
    {
        cin >> I >> J;
        if (I > J) swap(I, J);
    
        if (i == 1) Max = v[J] - v[I - 1];
        else Max = max(Max,v[J] - v[I - 1]);
    }

    cout << Max;
    return 0;
}
