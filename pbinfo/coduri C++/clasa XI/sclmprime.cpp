// #2086 - SCLMprime
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sclmprime.in");
ofstream g("sclmprime.out");

int v[1009], n, lg[10009], x, nr, lgmax, poz, j, val, Min, POZ;

bool ok;

bool prime(int x)
{
    if (x <= 1)
        return 0;
    
    for (int d = 2; d * d <= x; d++)
        if (x % d == 0)
            return 0;

    return 1;
}

void pd()
{
    int Max;
    lg[n] = 1;

    for (int i = n - 1; i >= 1; i--)
    {
        Max = 0;
    
        for (int j = i + 1; j <= n; j++)
            if (lg[j] > Max && v[i] <= v[j])
                Max = lg[j];
        
        lg[i] = Max + 1;
        
        if (lg[i] > lgmax)
        {
            lgmax = lg[i];
            poz = i;
            Min = v[i];
        }
        
        if (lg[i] == lgmax && v[i] < Min)
        {
            Min = v[i];
            poz = i;
        }
    }
}

int main()
{
    f >> nr;
    for (int i = 1; i <= nr; i++)
    {
        f >> x;
        if (prime(x) == 1)
            v[++n] = x;
    }

    pd();
    // for(i=1;i<=n;i++)cout<<lg[i]<<' ';
    g << lgmax << '\n' << Min << ' ';

    val = lgmax - 1;

    while (val > 0)
    {
        ok = 1;
        POZ = poz;
        
        for (int j = POZ + 1; j <= n; j++)
        {
            if (v[POZ] <= v[j] && lg[j] == val)
            {
                if (ok == 1)
                {
                    Min = v[j];
                    poz = j;
                    ok = 0;
                }
                else
                {
                    if (v[j] < Min)
                    {
                        Min = v[j];
                        poz = j;
                    }
                }
            }
        }

        g << Min << ' ';
        val--;
    }

    f.close();
    g.close();
    return 0;
}
