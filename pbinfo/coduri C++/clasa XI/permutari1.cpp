// #124 - Permutari1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("permutari1.in");
ofstream g("permutari1.out");

int st[100], n, a[1000];

void afis()
{
    for (int i = 1; i <= n; i++)
        g << a[st[i]] << ' ';
    g << '\n';
}

bool OK(int k)
{
    for (int i = 1; i < k; i++)
        if (st[i] == st[k])
            return 0;

    return 1;
}

void back(int k)
{
    if (k > n)
        afis();
    else
    {
        for (int i = n; i >= 1; i--)
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
    {
        st[i] = 1;
        a[i] = i;
    }

    back(1);

    f.close();
    g.close();

    return 0;
}
