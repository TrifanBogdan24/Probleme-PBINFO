// #27 - CifreZero
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

long long n = 0;

int nr_cif_zero(long long n)
{
    int nr = 0;

    
    do {
        if (n % 10 == 0)
            nr++;
        n = n / 10;
    } while (n);

    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    cout << "Introduceti numarul n = ";
    cin >> n;
    cout << "Numarul de cifre egale cu 0 din scrierea lui " << n << " = " << nr_cif_zero(n) << '\n';
    return 0;
}
