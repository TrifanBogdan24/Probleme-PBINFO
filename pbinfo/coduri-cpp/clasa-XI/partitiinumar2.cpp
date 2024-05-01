// #322 - PartitiiNumar2
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("partitiinumar2.in");
ofstream g("partitiinumar2.out");

int n, m, st[1000], s = 0;

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';
    g << '\n';
}

void back(int k)
{
    if (s < n)
    {
        for (int i = st[k - 1] + 1; i <= n; i++)
        {
            st[k] = i;
            s += i;

            back(k + 1);
            s -= i;
        }
    }
    if (s == n && k > m)
        afis(k - 1);
}

int main()
{
    f >> n >> m;
    st[0] = 0;
    back(1);

    f.close();
    g.close();
    return 0;
}
