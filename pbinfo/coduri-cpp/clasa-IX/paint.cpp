// #1233 - Paint
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("paint.in");
ofstream g("paint.out");
int n, m, i, q, k, st, dr, nr, l, b[250001];

int main()
{
    f >> n >> k >> m;
    for (i = 1; i <= m; i++)
    {
        f >> st >> l;
        dr = l + st - 1;
        b[st]++;
        b[dr + 1]--;
    }

    for (i = 1; i <= n; i++)
    {
        b[i] += b[i - 1];
        if (b[i] < k)
            nr++;
    }
    g << nr;
    //for (i = 1;i <= n; i++) cout << b[i];
    f.close();
    g.close();
    return 0;
}