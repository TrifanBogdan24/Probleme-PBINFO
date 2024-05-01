// #397 - Plopi1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("plopi1.in");
ofstream g("plopi1.out");

int v[10000], n, lg[10000], lgmax, poz, val;

void pd()
{
    lg[n] = 1;

    for (int i = n - 1; i >= 1; i--)
    {
        int Max = 0;
        
        for (int j = i + 1; j <= n; j++)
            if (v[i] > v[j] && lg[j] > Max)
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
    // for(i=1;i<=n;i++)cout<<lg[i]<<' ';
    // cout<<'\n';
    
    g << (n - lgmax) << '\n';

    f.close();
    g.close();
    return 0;
}
