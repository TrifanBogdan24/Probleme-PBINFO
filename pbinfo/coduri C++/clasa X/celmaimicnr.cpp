// #26 - CelMaiMicNr
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
int n = 0;

int cmmnr(int n)
{
    if (!n)
        return 0;

    int frecv[10], cif = 1, nr = 0;

    for (int i = 0; i < 10; i++)
        frecv[i] = 0;

    while (n)
    {
        frecv[n % 10]++;
        n /= 10;
    }

    while (!frecv[cif])
        cif++;

    nr = cif;
    frecv[cif]--;

    for (int i = 0; i <= 9; i++)
        for (int j = 1; j <= frecv[i]; j++)
            nr = nr * 10 + i;

    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    cout << "N = ";
    cin >> n;
    cout << "Cel mai mic numar care se poate scrie cu cifrele lui " << n << " = " << cmmnr(n) << '\n';
    return 0;
}
