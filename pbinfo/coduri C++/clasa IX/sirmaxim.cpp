// #3391 - sirmaxim
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("sirmaxim.in");
ofstream g("sirmaxim.out");
int n, nr;
long long x, Max;

int main()
{
    f >> n >> x;
    Max = x;
    for (int i = 2; i <= n / 2; i++)
    {
        f >> x;
        Max = max(Max, x);
    }
    for (int i = n / 2 + 1; i <= n; i++)
    {
        f >> x;
        if (x == Max)
            nr++;
    }
    g << nr;
    f.close();
    g.close();
    return 0;
}
