// #2577 - getbit
#include <iostream>

using namespace std;
unsigned long long  x, b;
int n, i;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> x >> b;
        if (x& (1LL << b)) cout << 1;
        else cout << 0;
    }
    return 0;
}
