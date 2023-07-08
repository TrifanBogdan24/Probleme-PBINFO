// #910 - KPrefix

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void prefix(int n, int k, int &x)
{
    // x = primele k cifre ale lui n

    int nr = 0, a[15] = {0};
    
    while (n != 0)
    {
        nr++;
        a[nr] = n % 10;
        n = n / 10;
    }
    
    for (int i = 1; i <= (nr + 1) / 2; i++)
        swap(a[i], a[nr - i + 1]);
    
    x = 0;
    for (int i = 1; i <= k; i++)
        x = x * 10 + a[i];
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
