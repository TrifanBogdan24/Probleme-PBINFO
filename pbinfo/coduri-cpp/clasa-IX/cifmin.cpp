// #186 - CifMin
#include <iostream>
#include <cctype>
using namespace std;
int n, i, j, a[1000], q, Min, v[1000], k;

int min_cif(int x)
{
    // subprogramul (functia) returneaza cifra minima a unui numar
    int cif = x % 10;

    while (x)
    {
        if (x % 10 < cif)
            cif = x % 10;
        x /= 10;
    }

    return cif;
}

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, poz = 0, aux = 0, MIN = 1, v[1005], cif[1005];
    
    for (int i = 0; i < 1005; i++)
        v[i] = cif[i] = 0;

    // citirea de la tastatura
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    
    // calcularea cifrei minime a fiecarui numar din vector
    for (int i = 1; i <= n; i++)
        cif[i] = min_cif(v[i]);

    // sortarea crescatoare a vectorului de cifre minime
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (cif[i] > cif[j])
                swap(cif[i], cif[j]);

    // aflarea pozitie primei cifre minime nenule
    poz = 1;
    while (!cif[poz])
        poz++;
    
    // interschimbarea primului element cu prima cifra nenula
    aux = cif[1];
    cif[1] = cif[poz];
    cif[poz] = aux;

    // calcularea numarului pe baza vectorului ordonat de cifre minime
    MIN = 1;
    for (int i = 1; i <= n; i++)
        MIN = MIN * 10 + cif[i];

    cout << MIN << '\n';
    return 0;
}
