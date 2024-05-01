// #802 - SumImpK
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

int sub(int n, int v[50], int k)
{
    int sum = 0;

    for (int i = 0; i < n && k > 0; i++)
    {
        if (v[i] % 2 == 1)
        {
            k--;
            sum +=v[i];
        }
    }
    
    if (k > 0)
        return -1;

    return sum;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, k = 0, v[50];

    for (int i = 0; i < 50; i++)
        v[i] = 0;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << sub(n, v, k) << '\n';
    return 0;
}

/* exemplu input
8 3
2 7 6 8 3 7 5 1
*/
