// #2392 - SumaXL
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
fstream f("sumaxl.in");
ofstream g("sumaxl.out");
long long x, y;
int a[100], b[100], n, i, j, t;

int main()
{
    f >> n;
    if (n > 9)
    {
        for (i = 1; i<= n; i++)
            f >> a[i];
        f >> x;
        i = 1;
        while (x != 0)
        {
            b[n - i + 1] = x % 10;
            x = x / 10;
            i++;
        }

        t = 0;
        for (i = n; i >= 1; i--)
        {
            a[i] = a[i] + b[i];
            if (a[i] > 9)
            {
                a[i] = a[i] % 10;
                a[i - 1]++;
            }
        }
        if (a[0] > 0)
            g << a[0];

        for (i = 1; i<= n; i++)
            g << a[i];
    } else
    {
        for (i = 1; i <= n; i++)
        {
            f >> a[i];
            y = y * 10 + a[i];
        }
        f >> x;
        g << x + y;
    }
    return 0;
}
