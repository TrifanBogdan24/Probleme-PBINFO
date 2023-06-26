// #382 - AproapeK
#include <iostream>

using namespace std;

int n, k, i, ok = 1, p, q;

int main()
{
    cin >> n >> k;
    i = 0;
    
    while (ok == 1)
    {
        if (i <= n && i + k >= n) ok = 0;
        else i += k;
    }

    p = n - i;
    q = i + k - n;
    
    if (p == q) cout << i;
    else if (p < q) cout << i;
    else cout << i + k;

    return 0;
}
