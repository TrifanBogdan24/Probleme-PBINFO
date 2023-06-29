// #25 - CelMaiMareNr
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int cmmnr(int n)
{
    int frecv[10], nr = 0;

    for (int i = 0; i < 10; i++)
        frecv[i] = 0;

    while (n)
    {
        frecv[n % 10]++;
        n = n / 10;
    }

    for (int i = 9; i >= 0; i--)
        for (int j = 1; j <= frecv[i]; j++)
            nr = nr * 10 + i;

    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cout << "N = ";
    cin >> n;
    cout << "Cel mai mare numar care se poate scrie cu cifrele lui " << n << " = " << cmmnr(n) << '\n';
    return 0;
}