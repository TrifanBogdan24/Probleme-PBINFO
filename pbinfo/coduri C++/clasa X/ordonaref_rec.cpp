// #1845 - OrdonareF_Rec
#include <iostream>
#include <cctype>
using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA FUNCTIEI TREBUIE SA FIE RECURSIVA

void ordonare(int a[1000], int n)
{
    if (n > 0)
    {
        for (int i = 0; i < n - 1; i++)
            if (a[i] > a[n - 1])
                swap(a[i], a[n - 1]);
        ordonare(a, n - 1);
    }
}
// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int v[1000], n = 0;
    for (int i = 0; i < 1000; i++)
        v[i] = 0;

    cout << "n  = "; cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    ordonare(v, n);

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';

    cout << '\n';
    return 0;
}
