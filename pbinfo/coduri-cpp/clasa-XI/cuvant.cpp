// #1867 - cuvant
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("cuvant2.in");
ofstream g("cuvant2.out");

char s[10000];
int n, v[1000], Min, lmax;

bool palindrom(int poz1, int poz2)
{
    while (poz1 <= poz2)
    {
        if (s[poz1] != s[poz2])
            return 0;
        poz1++;
        poz2--;
    }

    return 1;
}

int main()
{
    while (f >> s[++n]);
    
    v[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        Min = v[i - 1];
        
        for (int j = i - 1; j >= 1; j--)
        {
            if (palindrom(j, i) == 1)
            {
                Min = min(Min, v[j - 1]);
                lmax = max(lmax, i - j + 1);
            }
        }
        v[i] = Min + 1;
    }

    if (lmax == 0)
        lmax = 1;
    
    g << v[n] - 1 << ' ' << lmax;
    
    g << '\n';
    f.close();
    g.close();
    return 0;
}
