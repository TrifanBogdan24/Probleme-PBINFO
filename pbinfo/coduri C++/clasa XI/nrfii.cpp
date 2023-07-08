// #640 - NrFii
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nrfii.in");
ofstream g("nrfii.out");

int n, m, t[105], fii[105], mf;

void citire()
{
    f >> n;
    mf = -1;
    for (int i = 1; i <= n; i++)
    {
        f >> t[i];
        if (t[i] != 0)
        {
            fii[t[i]]++;
            mf = max(mf, fii[t[i]]);
        }
    }
}

int main()
{
    citire();
    for (int i = 1; i <= n; i++)
        if (fii[i] == mf)
            g << i << ' ';

    g << '\n';
    f.close();
    g.close();
    return 0;
}
