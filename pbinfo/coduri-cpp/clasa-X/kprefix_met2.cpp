// #910 - KPrefix

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void prefix(int n, int k, int &x)
{
    // x = primele k cifre ale lui n

    int q = 1;

    while (q <= n)
        q *= 10;

    for (int i = 1; i <= k; i++)
        q /= 10;
    
    x = n / q;

}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, k = 0, x = 0;

    cout << "n = ";
    cin >> n;

    cout << "k = ";
    cin >> k;

    prefix(n, k, x);

    cout << "x = " << x << '\n';

    return 0;
}
