// #276 - Suma Divizori
#include <iostream>

using namespace std;

long long n, S;

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

    cout << S;
    return 0;
}
