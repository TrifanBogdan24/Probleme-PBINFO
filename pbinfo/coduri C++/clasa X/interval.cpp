// #34 - Interval
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int interval(int a[100], int n)
{
    int nr = 0;
    int val1 = a[0];
    int val2 = a[n - 1];

    if (val1 > val2)
        swap(val1, val2);
    
    for (int i = 0; i < n; i++)
        if (val1 <= a[i] && a[i] <= val2)
            nr++;

    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, v[100];
    for (int i = 0; i < 100; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << interval(v, n) << '\n';
    return 0;
}

/* exemplu input
6
63 273 9 83 93 123
*/
