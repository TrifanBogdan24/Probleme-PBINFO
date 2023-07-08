// #125 - Permutari2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("permutari2.in");
ofstream g("permutari2.out");

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
    int i;
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
    {
        st[i] = 1;
        f >> a[i];
    }

    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
    
    back(1);

    f.close();
    g.close();

    return 0;
}
