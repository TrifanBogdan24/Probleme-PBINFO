// #86 - HalfSort
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("halfsort.in");
ofstream g("halfsort.out");

int main()
{
    // declararea si initializarea variabilelor
    int n = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // citirea din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];

    // sortarea crescatoare a primei jumatati
    for (int i = 1; i < n / 2; i++)
        for (int j = i + 1; j <= n / 2; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);

    // sortarea descrescatoare a celei de a doua jumatati
    for (int i = n / 2 + 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] < v[j])
                swap(v[i], v[j]);

    // scrierea in fisier
    for (int i = 1; i <= n; i++)
        g << v[i] << " ";
    g << '\n';

    f.close();
    g.close();
    return 0;
}
