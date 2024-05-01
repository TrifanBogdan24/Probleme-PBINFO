// #3605- descprime
#include <iostream>

using namespace std;

int s, v[109], nr, S = 0, E = 0, pos = 0, rez[100], Max = -1, q;
bool a[109], pus[109];

void calc()
{
    pos++;
 
    if (E > Max)
    {
        Max = E;
        q = 0;
 
        for (int i = 1; i <= nr; i++)
            if (pus[i] == 1)
                rez[++q] = v[i];
    }
}

void back(int k)
{
    if (k > nr)
    {
        if (S == s)
            calc();
    }
    else
    {
        for (int i = 0; i <= 1; i++)
        {
            if (i == 0)
            {
                pus[k] = 1;
                E++;
                S += v[k];

                back(k + 1);
                E--;
                S -= v[k];

                pus[k] = 0;
            }
            else
                back(k + 1);
        }
    }
}

int main()
{
    cin >> s;
    for (int i = 2; i <= s; i++)
    {
        if (a[i] == 0)
        {
            for (int d = 2 * i; d <= s; d = d + i)
                a[d] = 1;
            nr++;
            v[nr] = i;
            // cout<<i<<' ';
        }
    }
    
    S = 0;
    E = 0;
    // for(i=1;i<=nr;i++)cout<<v[i]<<' ';
    back(1);
    cout << pos << '\n';
    
    for (int i = 1; i <= Max; i++)
        cout << rez[i] << ' ';
    
    
    return 0;
}