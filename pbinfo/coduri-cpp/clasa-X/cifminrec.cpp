// #825 - CifMinRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE RECURSIVA

int cifmin(long long n)
{
    if (n > 9)
    {
        int c = cifmin(n / 10);
        
        if (n % 10 < c)
            return (n % 10);
        else
            return c;
        
    }
    
    return n;
}

// SOLTUIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cout << "n = ";
    cin >> n;

    cout << "Cifra minima a numarului " << n << " = " << cifmin(n) << '\n';
    return 0;
}
