// #75 - FSumDiv3
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int sum3(int v[100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 3 == 0)
            sum += v[i];

    return sum;
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

    cout << sum3(v, n) << '\n';

    return 0;
}

/* exemplu input
6
12 6 7 3 8 5
*/
