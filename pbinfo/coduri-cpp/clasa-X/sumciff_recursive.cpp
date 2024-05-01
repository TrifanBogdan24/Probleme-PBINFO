// #897 - SumCifF
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int sumcif(long long x)
{
    if (x == 0)
        return 0;
    else
        return (x % 10 + sumcif(x / 10));
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    long long n = 0;
    cout << "N = ";
    cin >> n;
    cout << "Suma cifrelor lui " << n << " = " << sumcif(n) << '\n';
    return 0;
}
