// #1434 - Mutare2
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

bool is_prime(int x)
{
    // functia returneaza valoarea TRUE pentru x = numar prim
    // si FALSE altfel

    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return false;

    return true;
}

void modificare(int v[10000], int n)
{
    int prim[10000], not_prim[10000];
    int nr_prim = 0, nr_not_prim = 0;
    
    for (int i = 0; i < 10000; i++)
        prim[i] = not_prim[i] = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (is_prime(v[i]))
            prim[nr_prim++] = v[i];
        else
            not_prim[nr_not_prim++] = v[i];
    }   

    for (int i = 0; i < nr_prim; i++)
        v[i] = prim[i];

    for (int i = 0; i < nr_not_prim; i++)
        v[nr_prim + i] = not_prim[i];
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, v[10000];
    for (int i = 0; i < 10000; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    modificare(v ,n);
    // afisare
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';

    return 0;
}

/* exemplu input
10
42 36 7 53 27 15 29 40 39 2
*/
