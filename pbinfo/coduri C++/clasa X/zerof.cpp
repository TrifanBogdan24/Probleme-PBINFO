// #1826 - ZeroF
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int zerof(int n)
{
    int nr = 0;

    for (int i = 1; i <= n; i++)
    {
        int aux = i;
        
        while (aux % 5 == 0)
        {
            nr++;
            aux /= 5;
        }
    }

    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    cout << zerof(n) << '\n';

    return 0;
}
