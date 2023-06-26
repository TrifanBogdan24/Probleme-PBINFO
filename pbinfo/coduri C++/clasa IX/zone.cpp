// #238 - Zone
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("zone.in");
ofstream g("zone.out");

int n, i, a[310], I1, I2;
bool ok1 = 1, ok2 = 1;

int main()
{
    f >> n;
    for (i = 1; i <= n * 3; i++)
    {
        f >> a[i];
        if (i <= n)
        {
            if (a[i] % 2 == 0 && ok1 == 1)
            {
                I1 = i;
                ok1 = 0;
            }
        } else if (i >= 2 * n && a[i] % 2 == 1)
        {
            I2 = i;
            ok2 = 0;
        }
    }
    
    if (!ok1 && !ok2)
        swap(a[I1], a[I2]);
    
    for (i = 1; i <= n * 3; i++)
        g << a[i] << " ";

    f.close();
    g.close();
    return 0;
}
