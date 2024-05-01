// #1004 - Eureni
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("eureni.in");
ofstream g("eureni.out");

int s, n, e, NRB;
struct nod {
    long long val;
    int nr;
};
nod v[1000];

int main()
{
    f >> s >> n >> e;
    v[0].val = 1;

    for (int i = 1; i <= n; i++)
        v[i].val = e * v[i - 1].val;

    for (int i = n; i >= 0; i--)
    {
        if (v[i].val <= s)
        {
            v[i].nr = s / v[i].val;
            NRB += v[i].nr;
            s -= v[i].nr * v[i].val;
            g << v[i].val << ' ' << v[i].nr << '\n';
        }
    }

    g << NRB << '\n';

    f.close();
    g.close();
    return 0;
}
