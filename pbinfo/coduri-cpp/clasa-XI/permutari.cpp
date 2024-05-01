// #123 - Permutari
#include <iostream>
#include <fstream>

using namespace std;

fstream f("permutari.in");
ofstream g("permutari.out");

int n, st[11];

bool succesor(int k)
{
    if (st[k] < n)
    {
        st[k]++;
        return 1;
    }

    return 0;
}

bool valid(int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;
    
    return 1;
}

void back(int k)
{
    if (k == n + 1)
    {
        for (int i = 1; i <= n; i++)
            g << st[i] << " ";
        g << '\n';
    }
    else
    {
        st[k] = 0;
        while (succesor(k) == 1)
        {
            if (valid(k) == 1)
                back(k + 1);
        }
    }
}
int main()
{
    f >> n;

    back(1);

    f.close();
    g.close();

    return 0;
}
