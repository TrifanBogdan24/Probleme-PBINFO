// #1879 - platou2
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("platou2.in");
ofstream g("platou2.out");
int k, n, y, i, x, nr;

int main()
{
    f >> n >> x;
    k = nr = 1;
    y = x;
    for (i = 2; i <= n; i++)
    {
        f >> x;
        if (x > y) nr++;
        else nr = 1;
    
        if (nr > k) k = nr;
        y=x;
    }
    g << k;
    f.close();
    g.close();
    return 0;
}
