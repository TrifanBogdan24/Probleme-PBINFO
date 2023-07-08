// #396 - SCLM
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sclm.in");
ofstream g("sclm.out");

int v[10000], n, lg[10000], lgmax, poz, val;

void pd()
{
    lg[n] = 1;

    for (int i = n - 1; i >= 1; i--)
    {
        int Max = 0;
        
        for (int j = i + 1; j <= n; j++)
            if (v[i] < v[j] && lg[j] > Max)
                Max = lg[j];
        
        lg[i] = Max + 1;
        
        if (lg[i] > lgmax)
        {
            lgmax = lg[i];
            poz = i;
        }
    }
}

int main()
{
    f >> n;
    for (int i = 1; i <= n; i++)
        f >> v[i];
    
    pd();

    g << lgmax << '\n' << poz << ' ';
    val = lgmax;

    while (val != 0)
    {
        int idx = poz + 1;
        
        while (!(v[poz] <= v[idx] && val == lg[idx] + 1))
            idx++;

        if (val > 1)
        {
            g << idx << ' ';

            poz = idx;
        }
        val--;
    }

    f.close();
    g.close();
    return 0;
}
