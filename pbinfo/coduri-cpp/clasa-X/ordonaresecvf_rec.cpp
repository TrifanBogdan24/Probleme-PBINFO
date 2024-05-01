// #1846 - OrdonareSecvF_REC
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA TREBUIE SA FIE RECURSIVA

void ordonare(int a[1000], int n, int st, int dr)
{
    if (dr > st)
    {
        for (int i = st; i < dr; i++)
            if (a[i] > a[dr])
                swap(a[i], a[dr]);
        
        ordonare(a, n, st, dr - 1);
    }
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int v[1000], n = 0, st = 0, dr = 0;
    for (int i = 0; i < 1000; i++)
        v[i] = 0;

    cout << "n  = "; cin >> n;
    cout << "st = "; cin >> st;
    cout << "dr = "; cin >> dr;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    ordonare(v, n, st, dr);

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';

    cout << '\n';
    return 0;
}
