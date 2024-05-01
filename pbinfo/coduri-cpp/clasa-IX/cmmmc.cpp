// #59 - CMMMC
#include <iostream>

using namespace std;

long long a,b;

long long cmmdc(long long a,long long b)
{
    if (a < b) swap(a, b);
    long long r = a % b;
    while (r)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
int main()
{
    cin >> a >> b;

    cout << (a * b / cmmdc(a, b));

    return 0;
}
