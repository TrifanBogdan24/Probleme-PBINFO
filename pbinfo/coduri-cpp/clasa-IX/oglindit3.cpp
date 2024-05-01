// #369 - Oglindit3
#include <iostream>
using namespace std;

long long n;

int sum_cif(long long x)
{
    // subprogramul returneaza suma cifrelor unui numar
    int s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int invers(int x)
{
    // subprogramul returneaza oglinditul unui numar
    int inv = 0;
    while (x)
    {
        inv = inv * 10 + x % 10;
        x /= 10;
    }
    return inv;
}

int main()
{
    cin >> n;
    cout << invers(sum_cif(n));
    return 0;
}
