// #74 - FUrmatorulPrim

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int nr_prim(int n)
{
    int ok, ok1, q;
    q = n + 1;
    ok = 1;
    
    while (ok == 1)
    {
        ok1 = 1;
        for (int d = 2; d * d <= q; d++)
            if (q % d == 0)
                ok1 = 0;
        
        if (ok1 == 1)
            ok = 0;
        else
            q++;
    }

    return q;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0;

    cout << "n = ";
    cin >> n;

    cout << "Primul numar prim mai mare decat " << n << " = " << nr_prim(n) << '\n';

    return 0;
}
