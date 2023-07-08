// #91 - Masini
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("masini.in");
ofstream g("masini.out");

int n, idx, sum, v[1000], T, Max, ok = 1;

int main()
{
    f >> n >> T;

    for (int i = 1; i <= n; i++)
        f >> v[i];

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);

    idx = 1;
    sum = v[1];

    while (ok == 1 && idx <= n)
    {
        if (sum <= T)
            Max++;

        idx++;
        sum += v[idx];
    }

    g << Max;

    f.close();
    g.close();

    return 0;
}
