// #834 - ElimCifRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE MUSAI SA FIE RECURSIVA

long long elimcif(long long n, int c)
{
    if (!n)
        return 0;
    
    int x = n % 10;
    int y = n / 10 % 10;

    if (n % 10 == c)
        return elimcif(n / 10, c);
    else
        return elimcif(n / 10, c) * 10 + n % 10;

}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    long long n = 0;
    int c = 0;
    cout << "N = ";                 cin >> n;
    cout << "cifra de eliminat = "; cin >> c;

    cout << "Noul numar = " << elimcif(n, c) << '\n';
    return 0;
}
