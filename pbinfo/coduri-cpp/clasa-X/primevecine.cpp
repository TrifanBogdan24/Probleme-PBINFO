// #912 - PrimeVecine

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void sub(int n, int &a, int &b)
{
    int ok1, ok, d;
    a = n - 1;
    ok1 = 1;
    while (ok1 == 1)
    {
        ok = 1;
        for (d = 2; d * d <= a; d++)
            if (a % d == 0)
                ok = 0;
        if (ok == 1)
            ok1 = 0;
        else
            a--;
    }
    b = n + 1;
    ok1 = 1;
    while (ok1 == 1)
    {
        ok = 1;
        for (d = 2; d * d <= b; d++)
            if (b % d == 0)
                ok = 0;
        if (ok == 1)
            ok1 = 0;
        else
            b++;
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, a = 0, b = 0;

    cout << "n = ";
    cin >> n;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    sub(n, a, b);

    return 0;
}
