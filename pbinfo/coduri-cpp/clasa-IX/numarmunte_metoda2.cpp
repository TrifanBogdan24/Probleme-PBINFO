// #189 - NumarMunte
// metoda 1
#include <iostream>
using namespace std;

bool munte(long long x)
{
    // functia intoarce 1 pentru un numar de tip munte
    // si 0 altfel
    int cif[15], nr = 0;
    for (int i = 0; i <= 14; i++)
        cif[i] = 0;

    nr = 0;
    do {
        nr++;
        cif[nr] = x % 10;
        x /= 10;
    } while (x);

    for (int i = 1; i <= nr / 2; i++)
        swap(cif[i], cif[nr - i + 1]);


    int nr_varfuri = 0;
    int indice_varf = 0;
    for (int i = 2; i < nr; i++)
    {
        if (cif[i - 1] < cif[i] && cif[i] > cif[i + 1])
        {
            nr_varfuri++;
            indice_varf = i;
        }
    }

    if (nr_varfuri != 1)
        return 0;

    for (int i = 1; i < indice_varf; i++)
        if (cif[i] > cif[i + 1])
            return 0;

    for (int i = indice_varf; i < nr; i++)
        if (cif[i] < cif[i + 1])
            return 0;
    
    return 1;
}

int main()
{
    // declarare si initializare variabile
    int n = 0;
    long long v[100000];
    for (int i = 0; i < 100000; i++)
        v[i] = 0;
    
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];                    // citire
        cout << munte(v[i]) << '\n';    // afisare daca este de tip munte sau nu
    }

    return 0;
}
