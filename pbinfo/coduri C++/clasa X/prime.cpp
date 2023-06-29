// #988 - Prime
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("prime.in");
ofstream g("prime.out");

bool prim(int x)
{
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return false;

    return true;
}

int main()
{
    int n = 0, v[1010];

    for (int i = 0; i < 1010; i++)
        v[i] = 0;

    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];

    for (int i = 1; i <= n; i++)
        if (prim(v[i]) == 1)
            g << v[i] << " ";

    g << "\n";
    f.close();
    g.close();
    return 0;
}