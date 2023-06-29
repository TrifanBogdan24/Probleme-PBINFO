// #2798 - Echilibrat
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int echilibrat(int n)
{
    int s1 = 0, s2 = 0, q = 0, P;
    
    while (n != 0)
    {
        if (q % 2 == 0)
            s1 += n % 10;
        else
            s2 += n % 10;

        q++;
        n = n / 10;
    }
    
    if (s1 % 2 == 0 && s2 % 2 == 1)
        P = 1;
    else
        P = 0;
    
    return P;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    cout << echilibrat(n) << '\n';
    return 0;
}
