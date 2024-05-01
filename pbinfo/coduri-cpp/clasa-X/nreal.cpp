// #43 - NReal

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

double nreal(int x, int y)
{
    float m;
    int q = 1, p;
    p = y;
    
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

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << nreal(x, y) << '\n';
    return 0;
}
