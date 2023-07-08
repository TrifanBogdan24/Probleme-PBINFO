// #3216 - descdiv
#include <iostream>

using namespace std;

long long m, n, v[10000], s[100000], maxx, nr, frecv[10000];

int main()
{
    cin >> n;
    for (int d = 1; d <= n; d++)
        if (n % d == 0)
            v[++m] = d;
    s[0] = 1;
    
    for (int i = 1; i <= m; i++)
    {
        for (int j = v[i]; j <= n; j++)
        {
            s[j] = s[j] % 123457 + s[j - v[i]] % 123457;
            s[j] = s[j] % 123457;
        }
    }

    cout << s[n] << '\n';
    return 0;
}
