// #900 - OrdonareF1
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void ordonare(int a[1000], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    // delcararea si initializarea variabilelor
    int n = 0, v[1000];
    for (int i = 0; i < 1000; i++)
        v[i] = 0;
    
    // citirea
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    // afisarea
    ordonare(v, n);
    cout << "Vectorul sortat descrescator = ";
    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    cout << '\n';
    return 0;
}

/* exemplu input
6
63 273 9 83 93 123
*/
