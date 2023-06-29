// #906 - SumaCifre
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void sumcif(int n, int &s_pare, int &s_impare)
{
    s_pare = 0;
    s_impare = 0;
    
    while (n != 0)
    {
        if (n % 2 == 0)
            s_pare = s_pare + n % 10;
        else
            s_impare = s_impare + n % 10;
        
        n = n / 10;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, scif_pare = 0, scif_impare = 0;

    cin >> n;
    sumcif(n, scif_pare, scif_impare);
    cout << "Suma cifrelor pare = " << scif_pare << '\n';
    cout << "Suma cifrelor impare = " << scif_impare << '\n';

    return 0;
}
