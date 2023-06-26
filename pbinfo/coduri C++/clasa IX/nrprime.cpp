// #666 - NrPrime
#include <iostream>

using namespace std;

int a[100][100], n, m, count_nr = 0;

int prim(int x)
{
    // subprogramul returneaza 1 daca numarul este prim
    for (int d = 2; d *d <= x; d++)
        if (x %d == 0)
            return 0;

    return 1;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
   
    count_nr = 0;
    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (i % 2 == 0 && prim(a[i][j]))
                count_nr++;

    cout << count_nr;
    return 0;
}
