// #237 - Sume
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("sume.in");
ofstream g("sume.out");
int n, i, v[10000], S[1000];

int main()
{
    f >> n;
    S[0] = 0;
    for (i = 1; i <= n; i++)
    {
        f >> v[i];
        S[i] = v[i] + S[i - 1];
    }
    for (i = n; i >= 1; i--)
        g << S[i] << '\n';

    f.close();
    g.close();
    return 0;
}
