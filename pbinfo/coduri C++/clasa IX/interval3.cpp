// #504 - Interval3
#include <iostream>
using namespace std;

int main ()
{
    // declarare si initializare variabile
    int x[10001], n = 0, ok = 0, Max = 0, Min = 0;
    for (int i = 0; i < n; i++)
        x[i] = 0;
    
    // citirea datelor
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i];

    // capetele intervalului
    Max = max(x[1], x[n]);
    Min = min(x[1], x[n]);
    
    // verificare apartenenta la intervalul dintre capete
    int i = 2;
    ok = 1;
    while (i < n && ok)
    {
        if (x[i] > Max || x[i] < Min)
            ok = 0;
        i++;
    }
    if (ok) cout << "DA";
    else cout << "NU";

    return 0;
}
