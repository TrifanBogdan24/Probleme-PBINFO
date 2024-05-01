// #35 - Count
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int count(double a[100], int n)
{
    double sum = 0;
    int nr = 0;
    
    for (int i = 0; i < n; i++)
        sum += a[i];

    sum = sum / double(n);

    for (int i = 0; i < n; i++)
        if (a[i] >= sum)
            nr++;
    
    return nr;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0;
    double v[100];
    for (int i = 0; i < 100; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << count(v, n) << '\n';    

    return 0;
}

/* exemplu input
6
12 7.5 6.5 3 8.5 7.5
*/