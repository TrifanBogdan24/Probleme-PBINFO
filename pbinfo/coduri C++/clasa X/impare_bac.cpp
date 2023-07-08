// #3119 - Impare_Bac

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void Impare(int &n)
{
    int q = 1, p, e;

    while (q < n)
    {
        e = n / q;
        p = n % q;
    
        if (e % 2 != 0)
        {
            n = e - 1;
            n = n * q + p;
        }
    
        q = q * 10;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;

    cout << "n = ";
    cin >> n;

    Impare(n);
    cout << "Noul n = " << n << '\n'; 

    return 0;
}
