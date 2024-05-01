#include <iostream>

using namespace std;

long long x = 0, y = 0;

long long cmmdc(long long a, long long b)
{
    while (a != b)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return b;
}

long long CMMMC(long long a, long long b)
{
    return (a * b) / cmmdc(a, b);
}

int main()
{
    cin >> x >> y;
    cout << cmmdc(x, y) << " " << CMMMC(x, y);
    return 0;
}
