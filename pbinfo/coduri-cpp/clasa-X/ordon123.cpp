// #2083 - ordon123
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void ordon123(int n, int a[1000000])
{
    int frecv[4] = {0, 0, 0, 0};
    
    for (int i = 0; i < n; i++)
        frecv[a[i]]++;

    for (int i = 1; i <= frecv[1]; i++)
        a[i - 1] = 1;
    
    for (int i = 1; i <= frecv[2]; i++)
        a[frecv[1] + i - 1] = 2;
    
    for (int i = 1; i <= frecv[3]; i++)
        a[frecv[1] + frecv[2] + i - 1] = 3;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, v[1000000];
    for (int i = 0; i < 1000000; i++)
        v[i] = 0;

    // citirea vectorului (contine NUMAI 1,2 si 3 !!! )
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ordon123(n, v);
    // afisarea
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';

    return 0;
}

/* exemplu input
6
3 1 2 1 3 1
*/
