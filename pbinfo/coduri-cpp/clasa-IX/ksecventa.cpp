// #521 - kSecventa
#include <iostream>
#include <fstream>
using namespace std;

int n, k, v[10000], i, j, d, q;
bool OK = 1, ok;

int main()
{
    cin >> n >> k;
    for (i = 1; i <= n; i++) cin >> v[i];

    q = n / k;
    i = 1;
    while (i < k && OK == 1)
    {
        j = i + 1;
        while (j <= k && OK == 1)
        {
            d = 1;
            ok = 1;
            while (d <= q && ok == 1)
            {

                if (v[(i - 1) * q + d] != v[(j - 1) * q + d])
                    ok = 0;

                d++;
            }

            if (ok == 1)
            {
                cout << i << " " << j;
                OK = 0;
            }
            j++;
        }
        i++;
    }
    if (OK == 1) cout << "NU";
    return 0;
}
