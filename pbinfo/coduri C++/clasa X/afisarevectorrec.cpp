// #835 - AfisareVectorRec
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI
// IMPLEMENTAREA TREBUIE SA FIE MUSAI RECURSIVA

void afisvec(int v[], int n)
{
    if (n > 1)
        afisvec(v, n - 1);

    cout << v[n - 1] << ' ';

    if (n < 1)
        cout << '\n';
}

// SOLUTIA PBINFO SE TERMINA AICI
int main()
{
    int n = 0;
    int v[10005];
    cout << "numarul de elemente = ";
    cin >> n;

    cout << "elementele vectorului = ";
    for (int i = 0; i < n; i++)
        cin >> v[i];

    afisvec(v, n);
    return 0;
}
