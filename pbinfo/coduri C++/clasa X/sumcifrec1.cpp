// #918 - SumCifRec1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE RECURSIVA

void sumcif(long long n, int &s)
{
    if (n)
    {
        sumcif(n / 10, s);
        s = s + n % 10;
    }
    else
        s = 0;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, sum_cif = 0;
    cout << "n = ";
    cin >> n;

    sumcif(n, sum_cif);
    cout << "Suma cifrelor numarului " << n << " = " << sum_cif << '\n';
    return 0;
}
