// #901 - OrdonareSecvF
#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

void ordonare(int a[1000], int n, int st, int dr)
{
    for (int i = st; i < dr; i++)
        for (int j = i + 1; j <= dr; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

// SOLUTIA PBINFO SE INCHEIE AICI

int main()
{
    // declarare si initializare variabile
    int n = 0, poz1 = 0, poz2 = 0, a[1000];
    for (int i = 0; i < 1000; i++)
        a[i] = 0;
    
    // citirea
    cin >> n >> poz1 >> poz2;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ordonare(a, n, poz1, poz2);
    // afisare vector ordonat
    cout << "Vectorul sortat intre cele doua pozitii = ";
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << '\n';
    return 0;
}

/* exemplu input
6 1 3
63 273 9 83 93 123
*/
