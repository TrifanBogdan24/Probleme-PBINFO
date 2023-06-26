// #80 - NumararePerechiPrimeIntreEle
#include <iostream>

using namespace std;

long long n, C, v[1000000];

int prime(int a, int b)
{
    while (a != b)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return (b == 1);
}

int main()
{
    n = 1;
    cin >> v[n];

    while (v[n]) cin >> v[++n];

    for (long long i = 1; i < n - 1; i++)
        if (prime(v[i], v[i + 1]))
            C = 1;

    cout << C;
    return 0;
}
