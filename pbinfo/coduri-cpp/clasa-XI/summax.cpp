// #317 - SumMax
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream f("summax.in");
ofstream g("summax.out");

int st[15], a[15][15], Max = -1, n;
bool pus[15];

void cal()
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s += a[i][st[i]];
        // cout<<st[i]<<' ';
    }
    Max = max(Max, s);
    // cout<<'\n';
}

void back(int k)
{
    int i;
    if (k > n)
        cal();
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                back(k + 1);
                pus[i] = 0;
            }
        }
    }
}

int main()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            f >> a[i][j];
    
    // cout<<n;
    back(1);
    
    g << Max << '\n';

    f.close();
    g.close();

    return 0;
}
