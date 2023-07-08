// #906 - SumaCifre

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void sumcif(int n, int &s, int &t)
{
    s = 0;      // suma cifrelor pare
    t = 0;      // suma cifrelor impare

    while (n != 0)
    {
        if (n % 2 == 0)
            s = s + n % 10;
        else
            t = t + n % 10;
        
        n = n / 10;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, s_cif_pare = 0, s_cif_impare = 0;

    cout << "n = ";
    cin >> n;

    sumcif(n, s_cif_pare, s_cif_impare);

    cout << "Suma cifrelor pare ale lui " << n << " = " << s_cif_pare << '\n';
    cout << "Suma cifrelor impare ale lui " << n << " = " << s_cif_impare << '\n';

    return 0;
}
