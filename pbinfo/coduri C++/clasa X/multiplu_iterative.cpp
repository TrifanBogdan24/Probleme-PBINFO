// #33 - Multiplu
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int multiplu(int a[100], int n, int k)
{
    if (k == 0)
        return 0;   // impartirea la 0 este imposibila

    int nr = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % k == 0 && a[i] % 10 == k)
            nr++;

    return nr;
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
