// #3351 - Prime3
#include <iostream>

using namespace std;

int n, ok;
long long v[1000000], s, d;

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
            if (ok == 1) s += v[i];
        }
    }
    cout << s;
    return 0;
}
