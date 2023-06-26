// #498 - NumararePIE
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
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
        if (are_primes(v[i], v[j]))
            C++;

    cout << C << '\n';
    return 0;
}
