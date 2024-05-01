// #321 - PartitiiNumar1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiinumar1.in");
ofstream g("partitiinumar1.out");

int v[1000], st[1000], n, suma = 0;

void afis(int k)
{
    for (int i = 1; i <= k; i++)
    {
        if (st[i] != 0)
            g << st[i] << ' ';
    }
    g << '\n';
}

void back(int k)
{
    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            st[k] = i;
            suma += i;
            if (suma == n)
                afis(k);
            else if (suma < n)
                back(k + 1);
            suma -= i;
        }
    }
    else
    {
        for (int i = st[k - 1] + 1; i <= n; i++)
        {
            st[k] = i;
            suma += i;
            if (suma == n)
                afis(k);
            else if (suma < n)
                back(k + 1);
            suma -= i;
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
