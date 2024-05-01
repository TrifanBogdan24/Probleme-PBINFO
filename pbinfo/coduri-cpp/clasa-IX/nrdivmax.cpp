// #245 - NrDivMax
#include <iostream>

using namespace std;

long long d, n, nr, q = 1, Max = 1, N;

int main()
{
    cin >> n;

    for (long long i = 2; i <= n; i++)
    {
        nr = 0;

        for (long long d = 1; d * d <= i; d++)
        {
            if (i % d == 0)
            {
                nr++;
                q = i / d;
                if (i % q == 0)
                    nr++;
            }
        }

        if (nr > Max)
        {
            N = i;
            Max = nr;
        }
    }

    cout << N;
    return 0;
}
