// #201 - SubmDiv
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream f("submdiv.in");
ofstream g("submdiv.out");

int x[1000], n, v[50], y[50], a, b, s[100], ok;

void tipar(int k)
{
    for (int i = 1; i <= k; i++)
        g << x[i] << " ";
    g << '\n';
}

int valid(int k)
{
    for (int i = 1; i < k; i++)
        if (x[i] == x[k])
            return 0;
    
    for (int i = 1; i < k; i++)
        if (x[k] < x[i])
            return 0;
    
    return 1;
}

void bkt(int k)
{
    for (int i = 1; i <= n; i++)
    {
        x[k] = s[i];
        if (valid(k))
        {
            if (k == a)
            {
                tipar(k);
                ok = 1;
            }
            else
                bkt(k + 1);
        }
    }
}

int main()
{
    f >> n >> a;

    int count = 0;

    for (int d = 1; d <= n; d++)
    {
        if (n % d == 0)
        {
            count++;
            s[count] = d;
        }
    
    }

    n = count;
    bkt(1);
    
    if (ok == 0)
        g << "fara solutie";
    
    f.close();
    g.close();

    return 0;
}
