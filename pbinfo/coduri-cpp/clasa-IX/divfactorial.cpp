// #1550 - DivFactorial
#include <iostream>
using namespace std;
int n, i, a[10001], v[10001];
long long q = 1;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++) q *= i;

    for (i = 1; i <= n; i++)
    {
        cin >> v[i];
        if (q % v[i] == 0)
            cout << v[i] <<" ";
    }
    return 0;
}
