// #185 - CifInit
#include <iostream>

using namespace std;

int first_digit(int x)
{
    // subprogramul returneaza prima cifra a unui numar
    while (x > 9)
        x /= 10;
    return x;
}

int main()
{
    // declararea si initializare variabilelor
    int n = 0, nr = 0, v[1005], cif[1005];
    
    for (int i = 0; i < 1005; i++)
        v[i] = cif[i] = 0;

    // citirea variabilelor
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        cif[i] = first_digit(v[i]);

    // sortarea vectorului de cifre
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (cif[i] > cif[j])
                swap(cif[i], cif[j]);
    
    // calcularea numarului
    nr = 1;
    for (int i = 1; i <= n; i++)
        nr = nr * 10 + v[i];

    cout << nr << '\n';    
    return 0;
}
