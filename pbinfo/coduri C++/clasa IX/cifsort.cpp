// #1566 - CifSort
#include <iostream>
using namespace std;

int main()
{
    long long n = 0,P = 1;
    int v[30], nr = 0, q = 0;
    for (int i = 0; i < 30; i++)
        v[i] = 0;

    cin >> n;
    while (n)
    {
        v[++nr] = n % 10;
        n /= 10;
    }
    
    for (int i = nr; i > 1; i = i - 2)
    {
        q = v[i - 1] * 10 + v[i];
        n = n * 100;
        n = n + q;
    }

    cout << n;
    return 0;
}
