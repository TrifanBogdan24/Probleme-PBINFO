// #3104 - B_Egal
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int Egal(int n)
{
    int q = 0;
    int ok = 0;

    while (n != 0)
    {
        if (n % 2 == 1)
        {
            if (q == 0)
            {
                ok = 1;
                q = n % 10;
            }

            if (ok == 1 && n % 10 != q)
                ok = 0;
        }

        n = n / 10;
    }

    return ok;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;
    cin >> n;
    cout << Egal(n) << '\n';
    return 0;
}
