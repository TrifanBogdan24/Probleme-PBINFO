// #41 - CreareNumar
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void F(int n, int a[10], int &k)
{
    bool ok = 1;
    k = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            ok = 0;
            k = k * 10 + a[i];
        }
    }
    
    if (ok == 1)
        k = -1;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, k = 0, v[10];
    for (int i = 0; i < 10; i++)
        v[i] = 0;

    // citirea
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    F(n, v, k);
    cout << k << '\n';
    return 0;
}

/*
6
2 3 5 6 4 1
*/
