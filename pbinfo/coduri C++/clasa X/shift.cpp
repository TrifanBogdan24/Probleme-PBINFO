// #38 - Shift
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void shift(int x[100], int n)
{
    int aux = x[0];
    
    for (int i = 0; i < n - 1; i++)
        x[i] = x[i + 1];
    
    x[n - 1] = aux;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, v[100];
    for (int i = 0; i < 0; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    shift(v, n);
    // afisarea vectorului
    cout << "Vectorul permutat la stanga = ";
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';

    return 0;
}

/* exemplu input
6
12 7 6 3 8 5
*/
