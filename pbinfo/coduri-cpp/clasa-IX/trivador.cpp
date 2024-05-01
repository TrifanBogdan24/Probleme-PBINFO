// #2916 - triviador
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
fstream f("triviador.in");
ofstream g("triviador.out");
int v[10009], n, i, p1, p2, p3, nr, max1, max2;

int main()
{
    f >> n;
    f >> p1 >> p2 >> p3;
    v[1] = p1 + p2 + p3;
    nr = 1;
    max2 = v[1];
    max1 = 0;
    
    for (i = 2; i <= n; i++)
    {
        f >> p1 >> p2 >> p3;
        v[i] = p1 + p2 + p3;
        if (v[i] == v[i - 1]) nr++;
        if (v[i] > max2)
        {
            max1 = max2;
            max2 = v[i];
        } else
        {
            if (v[i] > max1 && v[i] < max2)
                max1 = v[i];
        }
    }

    if (nr == n) g << "TOTI SUNT CASTIGATORI";
    else g << max2 << ' ' << max1;

    return 0;
}
