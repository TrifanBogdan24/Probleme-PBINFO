// #910 - KPrefix
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void prefix(int n, int k, int &x)
{
    // x = numarul format din primele k cifre ale lui n

    int q = 1;
    for (int i = 1; i <= k; i++)
        q *= 10;

    x = n;
    while (x / q)
        x /= 10;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, k = 0, x = 0;
    cin >> n >> k;
    prefix(n, k, x);
    cout << x << '\n';
    return 0;
}
