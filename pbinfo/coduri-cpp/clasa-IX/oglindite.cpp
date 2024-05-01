// #2290 - Oglindite
#include <iostream>
#include <cmath>
using namespace std;

int n, i;
long long v[1025], Min, Q, e;

long long invers(long long x)
{
    long long inv = 0;
    long long aux = x;
    
    while (x)
    {
        inv = inv * 10 + x % 10;
        x = x / 10;
    }
    return abs(aux - inv);
}

int main()
{
    cin >> n >> v[1];
    Q = v[1];
    Min = invers(v[1]);

    for (i = 2; i <= n; i++)
    {
        cin >> v[i];
        e = invers(v[i]);

        if (e == Min && v[i] < Q) Q=v[i];
        else if(e < Min)
        {
            Min = e;
            Q = v[i];
        }
    }
    cout << Q;
    return 0;
}
