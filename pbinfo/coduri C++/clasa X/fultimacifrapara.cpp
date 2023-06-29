// #76 - FUltimaCifraPara
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int UCP(int n)
{
    int q, OK = 1;
    q = -1;
    
    while (OK == 1)
    {
        if (n % 2 == 0)
        {
            q = n % 10;
            OK = 0;
        }

        n = n / 10;
        if (n == 0)
            OK = 0;
    }

    return q;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    cout << UCP(n) << '\n';
    return 0;
}
