// #113 - FCifre
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int nr_cif(int n, int k)
{
    int nr = 0, q = 0;

    nr = 0;

    while (n != 0)
    {
        q = n % 10;

        if (q != 0 && k % q == 0)
            nr++;

        n = n / 10;
    }

    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int k = 0, n = 0;
    cin >> k >> n;
    cout << nr_cif(n, k) << '\n';
    return 0;
}
