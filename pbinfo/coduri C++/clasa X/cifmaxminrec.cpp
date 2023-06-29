// #920 - CifMaxMinRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA TREBUIE SA FIE MUSAI RECURSIVA

void cifmaxmin(long long n, int &max, int &min)
{
    if (n > 9)
    {
        cifmaxmin(n / 10, max, min);
        
        if (n % 10 > max)
            max = n % 10;
        
        if (n % 10 < min)
            min = n % 10;
    }
    else
        max = min = n;
}

// IMPLEMENTAREA PBINFO SE TERMINA AICI

int main()
{
    long long n = 0;
    int max_cif = -1, min_cif = 10;
    cout << "Numarul n = ";
    cin >> n;

    cifmaxmin(n, max_cif, min_cif);
    cout << "cifra minima = " << min_cif << '\n';
    cout << "cifra maxima = " << max_cif << '\n';
    
    return 0;
}
