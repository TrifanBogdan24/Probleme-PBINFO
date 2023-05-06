// #2162 - Conturi
#include <iostream>
#include <fstream>
using namespace std;
fstream f("conturi.in");
ofstream g("conturi.out");

int nrbanca, n, smax = -1, i, cod;

int main()
{
    f >> n >> nrbanca;
    for (i = 1; i <= n; i++)
    {
        f >> cod;
        if (cod / 100000 == nrbanca && cod / 10000 % 10 == 1)
            smax = max(smax, cod % 10000);
    }
    g << smax;
    return 0;
}
