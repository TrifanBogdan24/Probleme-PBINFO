// #404 - CifreNrPrime
#include <iostream>

using namespace std;
int ok, nr = 0, n;
long long v[10001], d;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        ok = 1;
        d = 2;

        while (d * d <= v[i] && ok == 1)
        {
            if (v[i] % d == 0) ok = 0;
            else d++;
        }

        if (ok == 1)
        {
            while (v[i])
            {
                nr++;
                v[i] /= 10;
            }
        }
    }
    cout << nr;
    return 0;
}
