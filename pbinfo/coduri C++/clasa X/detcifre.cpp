// #905 - DetCifre
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void detcifre(int n, int &p, int &u)
{
    u = n % 10;
    while (n > 9)
        n = n / 10;
    p = n;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, prima = 0, ult = 0;
    cout << "n = ";
    cin >> n;
    detcifre(n, prima, ult);

    cout << "Prima cifra = " << prima << '\n';
    cout << "Ultima cifra = " << ult << '\n';

    return 0;
}
