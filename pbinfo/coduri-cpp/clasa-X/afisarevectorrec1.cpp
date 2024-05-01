// #836 - AfisareVectorRec1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA TREBUIE SA FIE RECURSIVA

void afisvec(int v[1000], int n)
{
    if (n > 0)
    {
        cout << v[n - 1] << " ";
        afisvec(v, n - 1);
    } else
        cout << "\n";
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int n = 0, v[1000];
    for (int i = 0; i < 1000; i++)
        v[i] = 0;

    cout << "n = ";
    cin >> n;

    cout << "Elementele vectorului : ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    afisvec(v, n);
    return 0;
}
