// #132 - ElemPP
#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream f("elempp.in");
ofstream g("elempp.out");
int n, i;
long long q, v[10001];

int main()
{
    f >> n;
    for (i = 1; i <= n; i++)
    {
        f >> v[i];
        q = v[i];
        while (q > 99) q /= 10;

        if (int(sqrt(q)) * int(sqrt(q)) == q)
            g<< v[i] << " ";
    }
    f.close();
    g.close();
    return 0;
}
