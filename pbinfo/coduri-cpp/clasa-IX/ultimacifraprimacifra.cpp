// #2687 - UltimaCifraPrimaCifra
#include <iostream>

using namespace std;

long long a[10005],x;
int n,i;
struct nod {
    int p, u;
};
nod v[100005];

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        x = a[i];
        v[i].u = x % 10;
        while(x > 9) x /= 10;
        v[i].p = x;
    }

    for (i = 1; i < n; i++)
        if (v[i].u == v[i + 1].p)
            cout << a[i] << ' ' << a[i + 1] << '\n';
        
    return 0;
}
