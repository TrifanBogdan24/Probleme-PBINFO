// #303 - Eratostene
#include <iostream>
#include <fstream>

using namespace std;
fstream f("eratostene.in");
ofstream g("eratostene.out");
int n, m, i, j, v[1000001], x, nr;

int main()
{
    for (i = 1; i <= 1000001; i++) v[i]=1;
    v[0] = v[1] = 0;
    for (i = 2; i*i <= 1000001; i++)
    {
        if (v[i] == 1)
        {
            for (j = 2; j <= 1000001 / i; j++) v[i*j] = 0;
        }
    }
    f >> n;
    for(i=1;i<=n;i++)
    {
        f >> x;
        if (v[x] == 1) nr++;
    }
    g << nr;
    return 0;
}
