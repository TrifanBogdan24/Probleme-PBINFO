// #40 - VectorMaxMinSum
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void P(int x[100], int n, int &mini, int &maxi, int &sum)
{
    mini = maxi = sum = x[0];
    for (int i = 1; i < n; i++)
    {
        mini = min(mini, x[i]);
        maxi = max(maxi, x[i]);
        sum += x[i];
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, minval = 0, maxval = 0, s = 0, v[100];
    for (int i = 0; i < 100; i++)
        v[i] = 0;

    // citirea
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    P(v, n, minval, maxval, s);
    cout << "mini = " << minval << '\n';
    cout << "maxi = " << maxval << '\n';
    cout << "sum  = " << s << '\n';
    return 0;
}

/* exemplu input
6
12 7 6 3 8 5
*/
