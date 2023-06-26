// #441 - PrimeIntreEle1
#include <iostream>

using namespace std;

long long a = 0, b = 0, n = 0, C = 1;

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
    cin >> n;

    for (long long i = 1; i < n; i++)
        for (long long j = i + 1; j <= n; j++)
            if (prime(i, j)) C++;

    cout << C;
    return 0;
}
