// #2363 - joc8
#include <fstream>
#include <iostream>
using namespace std;
fstream f("joc8.in");
ofstream g("joc8.out");
int n, i, j, NR;
long long x;

bool good(long long x)
{
    if (x < 9) return 1;
    else
    {
        int ult = 0, urm = 0, c = 0, nr = 0;

        while(x!=0)
        {
            if (x > 99)
            {
                ult = x % 10;
                c = x / 10 % 10;
                urm = x / 100 % 10;
                if ((ult >= c && c >= urm) || (urm >= c && c>= ult))
                    return 0;
            }
            nr++;
            x /= 10;
        }
        if (nr % 2 == 1)return 1;
        else return 0;
        }
}

int main()
{
    f >> n;
    for(i = 1; i <= n;i++)
    {
        f >> x;
        // cout << good(x) <<' ';
        if (good(x) == 1)
            NR++;
    }
    g << NR;
    close(f);
    close(g);
    return 0;
}
