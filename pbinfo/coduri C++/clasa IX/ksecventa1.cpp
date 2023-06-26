// #522 - kSecventa1
#include <iostream>
#include <fstream>
using namespace std;

int n, k, v[10000], i, j, d, q;
bool ok, OK = 1;

int main()
{
    cin >> n >> k;
    for (i = 1; i <= n; i++) cin >> v[i];

    i = 1;
    while (i < n && OK == 1)
    {
        j = i + 1;
        while (j <= n && OK == 1)
        {
            d = 0;
            ok = 1;

            while (d < k && ok == 1)
            {
                if (v[i + d] != v[j + d])
                    ok=0;
                d++;
            }
            if (ok)
            {
                cout << i << " " << j;
                OK = 0;
            }
            j++;
        }
        i++;
    }

    if (OK) cout << "NU";
    return 0;
}
