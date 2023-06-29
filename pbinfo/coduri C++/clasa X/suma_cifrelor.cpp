// #21 - Suma cifrelor
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void sum_cif(int n, int &s)
{
    s = 0;
    while (n != 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, cifs = 0;
    cin >> n;
    sum_cif(n, cifs);
    cout << "Suma cifrelor = " << cifs << '\n';
    return 0;
}
