// #43 - NReal
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

double nreal(int x, int y)
{
    float m = 0.0;
    int q = 1;
    int p = y;

    while (p != 0)
    {
        q = q * 10;
        p = p / 10;
    }

    m = x * q + y;
    m = m / q;

    return m;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int x = 0, y = 0;
    cin >> x >> y;
    cout << nreal(x, y) << '\n';
    return 0;
}
