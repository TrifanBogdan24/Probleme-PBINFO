// #773 - MaxAp1
#include <iostream>

using namespace std;

int main()
{
    // declaraea si initializarea variabilelor
    int n = 0, m = 0, nr_ap = 0, max_ap = 0, max_el;
    int a[105][105], v[105 * 105];
    
    for (int i = 0; i < 105; i++)
        for (int j = 0; j < 105; j++)
            a[i][j] = v[(i - 1) * 105 + j] = 0;

    // citirea
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    // vectorizarea matricii
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            v[(i - 1) * m + j] = a[i][j];

    // sortarea crecatoare a vectorului
    for (int i = 1; i < n * m; i++)
        for (int j = i + 1; j <= n * m; j++)
            if (v[i] > v[j])
                swap(v[i], v[j]);

    // aflarea elementului dorit
    max_el = v[1];
    max_ap = 1;
    
    int idx = 1;
    while (idx <= n * m)
    {
        nr_ap = 1;
        while (idx < n * m && v[idx] == v[idx + 1])
        {
            idx++;
            nr_ap++;
        }

        if (nr_ap >= max_ap)
        {
            max_ap = nr_ap;
            max_el = v[idx];
        }

        idx++;
    }

    cout << max_el << '\n';
    return 0;
}
