// #60 - PrimeIntreEle
#include <iostream>

using namespace std;

long long cmmdc(long long a, long long b)
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
    long long a = 0, b = 0, r = 0;
    cin >> a >> b;

    if(cmmdc(a ,b )) cout << "PIE";
    else cout << "NOPIE";

    return 0;
}
