// #1512 - Mars
#include <iostream>
using namespace std;
int n, m, st, dr, x, i;
long long v[500000];

int main()
{
    cin >> n >> m;

    for (i = 1; i <= m; i++)
    {
        cin >> st >> dr >> x;
        v[st] += x;
        v[dr + 1] -= x;
    }

    for (i = 1; i <= n; i++)
    {
        v[i] = v[i] + v[i - 1];
        cout << v[i] << ' ';
    }
    return 0;
}
