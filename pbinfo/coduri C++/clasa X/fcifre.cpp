// #113 - FCifre

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int nr_cif(int n, int k)
{
    int nr, q;
    nr = 0;

    while (n != 0)
    {
        q = n % 10;

        if (q != 0 && k % q == 0)
            nr++;

        n = n / 10;
    }

    return nr;
    // returnează numărul de cifre ale lui n care divid pe k
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, k = 0;

    cout << "n = ";
    cin >> n;

    cout << "k = ";
    cin >> k;

    cout << nr_cif(n, k) << '\n';

    return 0;
}
