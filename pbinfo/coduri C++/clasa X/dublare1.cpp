// #1633 - Dublare1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void dublare1(int &n)
{
    int q = 10;
    int m = n;

    while (m > 9)
    {
        m = m / 10;
        q = q * 10;
    }

    n = m * q + n;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    dublare1(n);
    cout << n << '\n';
    return 0;
}