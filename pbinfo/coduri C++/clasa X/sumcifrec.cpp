// #823 - SumCifRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA TREBUIE SA FIE RECURSIVA

int sumcif(int a)
{
    if (a != 0)
        return (a % 10 + sumcif(a / 10));
    else
        return 0;
}

// SOLUTIA SE TERMINA AICI

int main()
{
    int n = 0;
    cout << "n = ";
    cin >> n;
    cout << "Suma cifrelor = " << sumcif(n) << '\n';
    return 0;
}
