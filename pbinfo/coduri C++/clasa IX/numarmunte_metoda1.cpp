// #189 - NumarMunte
// metoda 1
#include <iostream>
using namespace std;

bool munte(long long x)
{
    int p = 2;

    while (x > 99)
    {
        if (x % 10 == (x / 10) % 10)
            p--;

        if (p >= 0)
        {

            if (p == 2 && x % 10 > (x / 10) % 10) p--;
            else if (p == 2 && ((x / 100) % 10 < (x / 10) %10 && (x / 10) % 10 > x % 10) ) p--;
            else if (p == 1  && x % 10 < (x / 10) % 10) p--;
        }
        x = x / 10;
    }

    return (p == 1);
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
