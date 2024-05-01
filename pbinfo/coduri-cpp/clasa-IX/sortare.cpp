// #129 - Sortare
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sortare.in");
ofstream g("sortare.out");

int main()
{
    // declararea si initializare variabilelor
    int n = 0, v[105];

    for (int i = 0; i < 105; i++)
        v[i] = 0;

    // citirea din fisier
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];
    
    // sortarea crescatoare a elementelor vectorului
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] < v[j])
                swap(v[i], v[j]);

    // scierea in fisier
    for (int i = 1; i <= n; i++)
        g << v[i] << " ";
    g << '\n';

    f.close();
    g.close();
    return 0;
}
