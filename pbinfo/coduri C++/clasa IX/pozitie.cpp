// #248 - Pozitie
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("pozitie.in");
ofstream g("pozitie.out");
int n, i, poz=1;
long long v[10001];

int main()
{
    f >> n >> v[1];
    for (i = 2; i <= n; i++)
    {
        f >> v[i];
        if (v[i] <= v[1])
            poz++;
    }
    g << poz;
    return 0;
}
