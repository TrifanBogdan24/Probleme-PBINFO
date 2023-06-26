// #445 - PseudoPerfect
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
                if (d * d == n) S+= d;
                else S = S + d + n / d;
            }
        }
    }

    if (S % n == 0) cout << "DA";
    else cout << "NU";

    return 0;
}
