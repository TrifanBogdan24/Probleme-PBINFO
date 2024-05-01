// #645 - DetDrum3
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

ifstream f("detdrum3.in");
ofstream g("detdrum3.out");

int n, m, t[105], v[105], rad, s[105], nodk, maxs = -1;
bool pus[105];

void citire()
{
    f >> n;
    for (int i = 1; i <= n; i++)
    {
        f >> t[i];
        if (t[i] == 0)
            rad = i;
    }
    for (int i = 1; i <= n; i++)
        f >> v[i];
}

void subarb(int nod, int radsub)
{
    s[radsub] += v[nod];
    if (nod != rad)
        subarb(t[nod], radsub);
}

void drum(int x)
{
    if (x != rad)
        drum(t[x]);
    g << x << ' ';
}

int main()
{
    citire();
    maxs = -1;
    
    for (int i = 1; i <= n; i++)
    {

        s[i] = 0;
        subarb(i, i);

        if (s[i] > maxs)
        {
            maxs = s[i];
            nodk = i;
        }
    }
    
    g << maxs << '\n';
    drum(nodk);
    
    f.close();
    g.close();
    return 0;
}
