// #127 - Prima cifra
#include <iostream>
using namespace std;

int n, v[1005], sum;

int prima_cifra(int x)
{
    while (x > 9)
        x = x / 10;
    return x;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    sum = 0;
    for (int i = 1; i <= n; i++)
        sum += prima_cifra(v[i]);

    cout << sum;
    return 0;
}
