// #402 - Bete
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bete.in");
ofstream g("bete.out");

int n, S, stot, s[10005], i, j, Max, v[10005], rasp[1000], nr;

void citire()
{
    f >> n >> S;

    for (int i = 1; i <= n; i++)
    {
        f >> v[i];
        stot += v[i];
    }
}

void pd()
{
    Max = 0;
    s[0] = 0;

    for (int i = 1; i <= stot; i++)
        s[i] = -1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = Max; j >= 0; j--)
            if (s[j] != -1 && s[j + v[i]] == -1)
                s[j + v[i]] = i;

        Max += v[i];
    }
    // for(i=1; i<=stot; i++)cout<<i<<' '<<s[i]<<'\n';
}

int main()
{
    citire();
    if (stot < S)
        g << "NU";
    else
    {
        pd();
        if (s[S] == -1)
            g << "NU";
        else
        {
            g << "DA" << '\n';

            while (S != 0)
            {
                nr++;
                rasp[nr] = s[S];
                S -= v[s[S]];
            }
            g << nr << '\n';
            for (i = nr; i >= 1; i--)
                g << rasp[i] << ' ';
        }
    }

    f.close();
    g.close();
    return 0;
}
