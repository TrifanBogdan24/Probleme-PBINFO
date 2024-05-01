// #3350 - Prime2
#include <iostream>

using namespace std;

int n, i, ok, C;
long long v[1000000], d;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (v[i] > 1)
        {
            d = 2;
            ok = 1;
            while (d * d <= v[i] && ok == 1)
            {
                if (v[i] % d == 0) ok = 0;
                else d++;
            }
            if (ok == 1) C++;
        }
    }
    cout << C;
    return 0;
}
