// #131 - SortCif2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sortcif2.in");
ofstream g("sortcif2.out");

int n, i, j, v[1000], a[1000], s, d, q, p;

int first_digit(int x)
{
    // functia returneaza prima cifra a unui numar
    while (x > 9)
        x = x / 10;
    return x;
}

int main()
{
    // declarare si initializare variabile
    int n = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // citirea din fisier
    f >> n;
    for (int i = 0; i < 105; i++)
        f >> v[i];

    // sortare crescatoare dupa prima cifra
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (first_digit(v[i]) > first_digit(v[j]))
            {
                swap(v[i], v[j]);
            }
        }
    }

    // scrierea in fisierul de output
    for (i = 1; i <= n; i++)
        g << v[i] << " ";
    g << '\n';

    f.close();
    g.close();
    return 0;
}

