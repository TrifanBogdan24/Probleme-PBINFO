// #1002 - Paginare
#include <iostream>
using namespace std;
unsigned int v,p;
unsigned long long n;
bool ok=1;

int main()
{
    cin >> n;
    v = n / 792;
    n = n % 792;
    if (n <= 9) p=n;
    else if (n <= 189)
    {
        n = n - 9;
        if (n % 2) ok = 0;
        else p = 9 + n / 2;

    } else
    {
        n = n - 189;
        if (n % 3) ok = 0;
        else p = 99 + n / 3;
    }

    if (ok)
    {
        if (p) cout << v + 1 << ' ' << p;
        else cout << v << ' ' << 300;
    } else cout << "IMPOSIBIL";
    return 0;
}
