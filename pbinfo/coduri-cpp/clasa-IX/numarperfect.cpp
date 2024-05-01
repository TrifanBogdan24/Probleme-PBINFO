// #64 - NumarPerfect
#include <iostream>

using namespace std;

long long n, S, q;

int main()
{
    cin >> n;

    if (n == 1) S = 1;
    else {
        for (long long d = 1; d * d <= n; d++)
        {
            if (n % d == 0)
            {
                if (d * d == n) S += d;
                else S = S + d + n / d;
            }

        }
    }

    if (S == 2 * n) cout << n << " este perfect";
    else cout << n << " nu este perfect";

    return 0;
}
