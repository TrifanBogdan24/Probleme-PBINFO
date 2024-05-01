// #2728 - Echilibrat

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

    return (s1 % 2 == 0 && s2 % 2 == 1);
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;

    cout << "n = ";
    cin >> n;
    cout << echilibrat(n) << '\n';

    return 0;
}
