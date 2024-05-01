// #805 - Valuri
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void valuri(int n, int v[100])
{
    int nr = 0;
    for (int i = 1; i <= n * 2; i = i + 2)
    {
        v[nr++] = i;
        v[nr++] = 2 * n - i + 1;
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

    valuri(n, v);

    // afisarea
    n *= 2;
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';

    return 0;
}

/* exemplu input
4
*/
