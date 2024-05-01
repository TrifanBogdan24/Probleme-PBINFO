// #481 - Prod2Cons
#include <iostream>
#include <cmath>
using namespace std;
long long n, d;
bool ok = 1;

int main ()
{
    cin >> n;
    d = 1;
    while (ok == 1)
    {
        if (d * d + d == n)
        {
            cout << d << ' ' << d + 1;
            ok = 0;
        } else d++;
        
        if (d * d + d > n)
        {
            ok = 0;
            cout << "NU EXISTA";
        }
    }
    return 0;
}
