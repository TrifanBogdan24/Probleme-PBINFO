// #505 - Identice
#include <iostream>
using namespace std;
int main ()
{
    // declarare si initializare variabile
    int n = 0, ok = 1;
    long long x[1002], y[1002];

    // citirea datelor
    for (int i = 0; i < 1002; i++)
        x[i] = y[i] = 0;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) cin >> x[i];
    
    for (int i = 1; i <= n; i++) cin >> y[i];

    // sortarea crescatoare a vectorilor
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (x[i] > x[j]) swap(x[i], x[j]);
            if (y[i] > y[j]) swap(y[i], y[j]);
        }
    }

    // compararea element cu element a vectorilor ordonati
    // daca o pereche difera, inseamna ca vectorii nu sunt identici
    int i = 1;
    ok = 1;
    while (i <= n && ok)
    {
        if (x[i] != y[i])
            ok = 0;
        i++;
    }
    
    if (ok) cout << "DA";
    else cout << "NU";
    return 0;
}
