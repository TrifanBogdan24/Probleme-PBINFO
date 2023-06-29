// #33 - Multiplu
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int multiplu(int a[100], int n, int k)
{
    if (k == 0)
        return 0;   // impartirea la 0 este imposibila

    if (n == 1)
    {
        if (a[n - 1] % k == 0 && a[n - 1] % 10 == k)
            return 1;
        else
            return 0;
    }
    else
    {
        if (a[n - 1] % k == 0 && a[n - 1] % 10 == k)
            return 1 + multiplu(a, n - 1, k);
        else
            return 0 + multiplu(a, n - 1, k);
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, k = 0, v[100];
    for (int i = 0; i < 100; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << multiplu(v, n, k) << '\n';
    return 0;
}

/* exemplu input
6 3
9 273 63 83 93 123
*/
