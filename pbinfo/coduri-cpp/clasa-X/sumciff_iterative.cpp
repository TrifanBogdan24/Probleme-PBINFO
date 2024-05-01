// #897 - SumCifF
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int sumcif(long long x)
{
    int sum = 0;

    while (x)
    {
        sum = sum + x % 10;
        x /= 10;
    }

    return sum;
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
