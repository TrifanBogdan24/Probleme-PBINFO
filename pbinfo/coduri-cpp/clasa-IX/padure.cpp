// #2353 - padure
#include <iostream>
#include <fstream>
using namespace std;
fstream f("padure.in");
ofstream g("padure.out");
int n, m, c, i, j, l1, l2, c1, c2, Max= -1, Suma;
int a[109][109], s[109][109];

bool prime(int x)
{
    if (x == 1 || x == 0)
        return 0;
    
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;
    
    return 1;
}

int main()
{
    f >> n >> m >> c;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            f >> a[i][j];
            s[i][j] = s[i - 1][j] + s[i][j - 1] + a[i][j] - s[i - 1][j - 1];
        }

    }

    for (i = 1; i <= c; i++)
    {
        f >> l1 >> c1 >> l2 >> c2;
        Suma = s[l2][c2] - s[l1 - 1][c2] - s[l2][c1 - 1] + s[l1 - 1][c1 - 1];
        if (prime(Suma) == 1)
            Max = max(Max, Suma);
    }
    g << Max;
    return 0;
}
