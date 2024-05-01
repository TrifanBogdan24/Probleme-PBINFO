// #375 - Urmatorul prim
#include <iostream>

using namespace std;

long long n, OK = 1, ok, d;

int main()
{
    cin >> n;
    n++;

    while (OK == 1)
    {
        ok = 1;
        d = 2;
        
        while (d * d <= n && ok == 1)
        {
            if (n % d == 0) ok = 0;
            else d++;
        }
        
        if (ok == 1) OK = 0;
        else n++;
    }

    cout<<n;
    return 0;
}
