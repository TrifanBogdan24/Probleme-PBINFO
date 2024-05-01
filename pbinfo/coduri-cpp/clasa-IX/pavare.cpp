// #378 - Pavare
#include <iostream>

using namespace std;

long long cmmdc(long long a,long long b)
{
    if (a == b) return a;
    if (a > b) return cmmdc(a-b,b);
    return cmmdc(a,b-a);
}

int main()
{
    long long a = 0, b = 0, q = 0;
    cin >> a >> b;
    q = cmmdc(a, b);
    cout << (a * b / q) / q << ' ' << q;
    return 0;
}