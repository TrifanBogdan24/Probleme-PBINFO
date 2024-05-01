// #817 - Zero
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void zero(int n, int v[100])
{
    int np = 0, nip = 0;
    int p[100], ip[100];

    for (int i = 0; i < 100; i++)
        p[i] = ip[i] = 0;

    for (int i = 1; i <= n * 2; i++)
    {
        if (v[i] % 2 == 0)
            p[++np] = v[i];
        else
            ip[++nip] = v[i];
    }
    
    for (int i = 1; i <= n * 2; i++)
    {
        if (i % 2 == 0)
            v[i] = p[i / 2];
        else
            v[i] = ip[(i + 1) / 2];
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, v[100];
    for (int i = 0; i < 100; i++)
        v[i] = 0;
    
    // citirea
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    zero(n, v);
    n *= 2;
    // afisarea
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';

    return 0;
}

/* exemplu input
5
4 5 0 9 10 7 15 3 8 10
*/
