// #2661 - eliminareciframijloc
#include <iostream>
using namespace std;

int main()
{
    long long n = 0, q = 1, nr1 = 0, nr2 = 0, p = 0;
    int nr = 0;
    cin >> n;
    p = n;
    while (p)
    {
        nr++;
        p /= 10;
    }

    for (int i = 1; i <= nr / 2; i++)
        q = q * 10;

    nr2 = n % q;
    q = q * 10;
    nr1 = n / q;
    q = q / 10;
    cout << nr1 * q + nr2;
    return 0;
}
