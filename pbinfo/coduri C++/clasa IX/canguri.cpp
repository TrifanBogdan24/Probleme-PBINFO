// #2012 - Canguri
#include <iostream>
#include <fstream>
using namespace std;
fstream f("canguri.in");
ofstream g("canguri.out");
int n, m, i, j, x;
struct cangur {
    int l;
    int nr;
};
cangur c1,c2,c3;

int main()
{
    f >> c1.nr >> c1.l;
    f >> c2.nr >> c2.l;
    f >> c3.nr >> c3.l;

    if (c1.l > max(c2.l,c3.l))
    {
        g << c1.nr << '\n';
        x = c1.l;
    } else if (c2.l > max(c1.l,c3.l))
    {
        g << c2.nr << '\n';
        x = c2.l;
    } else if (c3.l > max(c1.l,c2.l))
    {
        g << c3.nr<<'\n';
        x = c3.l;
    }

    if (800 % x == 0)
        g << 800 / x;
    else 
        g << 800 / x + 1;

    return 0;
}
