// #652 - AfisareFii
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("afisarefii.in");
ofstream g("afisarefii.out");

int n, m, t[105], x, k, F[105], a[105][105];

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> x;
        t[i] = x;
        F[x] = i;
        a[x][0]++;
        a[x][a[x][0]] = i;
    }

    f >> k;
    for (int i = 1; i <= k; i++)
    {
        f >> x;
        g << a[x][0] << ' ';
        
        for (int j = 1; j <= a[x][0]; j++)
            g << a[x][j] << ' ';
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
