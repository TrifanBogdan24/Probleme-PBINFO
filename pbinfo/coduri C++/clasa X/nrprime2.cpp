// #2838 - NrPrime2
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int NrPrime(int n)
{
    int nr = 0, q = 0;

    while (n != 0)
    {
        q = n % 10;

        if (q == 2 || q == 3)
            nr++;
        else if (q == 5 || q == 7)
            nr++;

        n = n / 10;
    }

    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    cout << NrPrime(n) << '\n';
    return 0;
}
