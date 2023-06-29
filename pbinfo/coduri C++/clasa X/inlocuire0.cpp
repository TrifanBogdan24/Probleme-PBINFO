// #811 - Inlocuire0
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void num(int n, int v[50])
{
    int x = v[0];
    
    for (int i = 0; i < n; i++)
        if (v[i] <= x)
            v[i] = 0;
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, v[50];
    for (int i = 0; i < 50; i++)
        v[i] = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    num(n, v);
    cout << "Vectorul cu valori anulate = ";
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';

    cout << '\n';
    return 0;
}

/* exemplu input
7
4 5 0 9 3 4 -2
*/
