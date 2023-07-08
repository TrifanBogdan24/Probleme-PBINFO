// #908 - AfisareNumerePrime

#include <iostream>

using namespace std;

// SOLUTIA PBINFO INCEPE AICI

bool is_prim(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return false;

    return true;
}

void afisare(int a, int b)
{
    // afiseaza numerele prime din [a, b]

    if (a > b)
        swap(a, b);

    for (int i = a; i <= b; i++)
        if (is_prim(i))
            cout << i << ' ';
}

// SOLUTIA PBINFO SE TERMINA AICI

int main()
{
    int a = 0, b = 0;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    afisare(a, b);

    return 0;
}
