// #340 - Control
#include <iostream>
using namespace std;

int sum_cif(int x)
{
    int s = 0;
    while (x)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}
int main()
{
    long long n = 0, s = 0;
    cin >> n;

    while (n > 9)
        n = sum_cif(n);

    cout << n;
    return 0;
}
