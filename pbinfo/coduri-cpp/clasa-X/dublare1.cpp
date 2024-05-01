// #1633 - Dublare1

#include <iostream>

using namespace std;

//  SOLUTIA PBINFO INCEPE AICI

void dublare1(int &n)
{
    int q = 10, m, p;
    m = n;
    
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

    cout << "n = ";
    cin >> n;

    dublare1(n);

    cout << "noul n = " << n << '\n';

    return 0;
}
