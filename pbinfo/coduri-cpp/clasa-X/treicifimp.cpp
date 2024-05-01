// #2859 - TreiCifImp
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int n = 0;

int TreiCifImp(int n)
{
    int a = 0, b = 0, c = 0;

    while (n != 0)
    {
        a = n % 10;
        b = n / 10 % 10;
        c = n / 100 % 10;
        
        if (a % 2 == 1 && b % 2 == 1 && c % 2 == 1)
            return 1;

        n = n / 10;
    }

    return 0;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    cout << "Introduceti numarul n = ";
    cin >> n;

    if (TreiCifImp(n))
        cout << n << " contine trei cifre impare consecutive\n";
    else
        cout << n << " nu contine trei cifre impare consecutive\n"; 

    return 0;
}
