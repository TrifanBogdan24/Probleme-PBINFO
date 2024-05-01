// #290 - PareOrdonate
#include <iostream>

using namespace std;

bool verificare(int n, int v[105])
{
    // functia va intoarce false la prima pereche de numere pare neordonate crescator
    
    int idx = 1;   // in idx vom calcula indexul primului numar par din vector
    while (v[idx] % 2 != 0)
        idx++;

    int last = v[idx];
    for (int i = idx + 1; i <= n; i++)
    {
        if (v[i] % 2 == 0 && last > v[i])
            return 0;

        if (v[i] % 2 == 0)
            last = v[i];
    }

    return 1;
}

int main()
{
    // declarare si initializare variabile
    int n = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;
    
    // ciitirea
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // afisarea raspunsului
    if (verificare(n ,v))
        cout << "DA\n";
    else
        cout << "NU\n";
    
    return 0;
}
