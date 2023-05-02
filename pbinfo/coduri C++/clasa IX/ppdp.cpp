// #3663 - ppdp
#include <iostream>

using namespace std;
long long n;

long long pp(long long n)
{
    long long d;
    for (d = 2; d * d <= n; d++)
        if (n % d == 0) return d*d;
}

int main()
{
    cin >> n;
    cout << pp(n);
    return 0;
}
