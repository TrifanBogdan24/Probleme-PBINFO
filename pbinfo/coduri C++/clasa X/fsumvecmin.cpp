// #73 - FSumVecMin
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int suma(int v[100], int n, int m)
{
    int s = 0;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);

    for (int i = 0; i < m; i++)
        s += v[i];
    return s;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, m = 0, v[100];
    for (int i = 0; i < n; i++)
        v[i] = 0;

    // citirea
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << suma(v, n, m) << '\n';
}

/* exemplu input
6 4
12 7 6 3 8 5
*/
