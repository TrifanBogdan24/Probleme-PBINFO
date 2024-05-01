// #202 - PermPF
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("permpf.in");
ofstream g("permpf.out");

int n, st[100], a[100];

void afis()
{
    for (int i = 1; i <= n; i++)
        g << st[i] << ' ';
    g << '\n';
}

bool OK(int k)
{
    if (st[k] == k)
        return 0;
    
    for (int i = 1; i < k; i++)
    {
        if (st[i] == st[k])
            return 0;
    
        if (st[i] == i)
            return 0;
    }
    
    return 1;
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = 1; i <= n; i++)
        {
            st[k] = i;
            if (OK(k))
                back(k + 1);
        }
    }
}

int main()
{
    f >> n;

    for (int i = 1; i <= n; i++)
        st[i] = i;
    
    back(1);

    f.close();
    g.close();

    return 0;
}
