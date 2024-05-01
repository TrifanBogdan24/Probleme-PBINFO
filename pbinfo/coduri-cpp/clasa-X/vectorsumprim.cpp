// #1827 - VectorSumPrim
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

bool is_prime(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;

    return 1;
}

void P(int x[105], int n, int &s)
{
    s = 0;
    for (int i = 0; i < n; i++)
        if (is_prime(x[i]))
            s += x[i];
}

// SOLUTI PBINFO SE TERMINA AICI

int main()
{
    int n = 0, v[105], sum = 0;
    for (int i = 0; i < 105; i++)
        v[i] = 0;

    cout << "n = ";
    cin >> n;

    cout <<"Elementele vectorului = ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    P(v, n, sum);
    cout << "Suma elementelor = " << sum << '\n';

    return 0;
}

/* exemplu input
6
12 7 6 3 8 5
*/
