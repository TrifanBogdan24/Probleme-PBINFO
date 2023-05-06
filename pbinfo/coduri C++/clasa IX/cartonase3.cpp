// #3431 - Cartonase3
#include <fstream>
#include <iostream>
using namespace std;
fstream f("cartonase.in");
ofstream g("cartonase.out");

int n, m, i, j, c, lmax, nrlmax, nrp;
struct cart {
    int st, dr;
};
cart v[505];

int main()
{
    f >> c >> n;
    for (i = 1; i <= n; i++)
        f >> v[i].st >> v[i].dr;

    i = 1;
    while (i < n)
    {
        j = i;
        while (v[j].dr == v[j+1].st) 
            j++;
        // cout << i << ' ' << j << '\n';
        if (j > i)
        {
            nrp++;
            if (j - i + 1 > lmax)
            {
                lmax = j - i + 1;
                nrlmax = 1;
            } else
            {
                if (j - i + 1 == lmax)
                    nrlmax++;
            }
        }
        i++;
    }
    if (c == 1) g << nrp;
    else if (c == 2) g << lmax;
    else if (c == 3) g << nrlmax;
    return 0;
}
