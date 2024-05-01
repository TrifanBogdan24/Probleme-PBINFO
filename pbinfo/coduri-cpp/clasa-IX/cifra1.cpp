// #361 - cifra1
#include <iostream>
using namespace std;
long long x, n, p = 1, q;
int c;

int main()
{
    cin >> n;
    x = n;
    c = n % 10;
    while (x)
    {
        p *= 10;
        if (x % 10 < c)
        {
            c = x % 10;
            q = p;
        } else if (x % 10 == c) q = p;
        x /= 10;
    }
    if (q > n)
    {
        q /= 10;
        n = n % q;
    } else
    {
        p = q / 10;
        n = n / q * p + n % p;
    }
    cout << n;
    return 0;
}
