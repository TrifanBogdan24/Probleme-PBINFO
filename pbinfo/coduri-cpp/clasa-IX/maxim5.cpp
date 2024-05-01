// #281 - Maxim5
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("maxim5.in");
ofstream g("maxim5.out");
long long M, x, maxx, nrm, nr, y;

int main()
{
    f >> x;
    M = x;
    nrm = 1;
    y = x;
    while(y)
    {
        f >> x;
        nrm++;
        M = max(M, x);
        y = x;
    }


    while (f >> x)
    {
        maxx = x;
        y = x;
        nr = 1;
    
        while (y)
        {
            f>>x;
            nr++;
            maxx = max(maxx, x);
            y = x;
        }

        if (nr < nrm)
        {
            nrm = nr;
            M = maxx;
        } else if (nr == nrm) M = max(M, maxx);
    }
    g << M;
    f.close();
    g.close();
    return 0;
}
