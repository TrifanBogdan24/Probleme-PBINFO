// #492 - Numarare3
#include <iostream>

using namespace std;

int cmmdc(int x, int y)
{
    // subprogramul intoarce cel mai mare divizor comun a doua numere
    while (x != y)
    {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }

    return x;
}

bool are_primes(int x, int y)
{
    // subprogramul intoarce TRUE daca doua numere sunt prime intre ele
    // si FALSE altfel

    return (cmmdc(x, y) == 1);
}

int main()
{
    // declararea si initializea variabilelor
    int n = 0, C = 0, v[205];

    for (int i = 0; i < 205; i++)
        v[i] = 0;

    // citirea vectorului
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    // calculul lui C
    C = 0;
    for (int i = 1; i <= n / 2; i++)
        if (i != n - i + 1 && are_primes(v[i], v[n - i + 1]))
            C++;

    cout << C << '\n';
    return 0;
}
