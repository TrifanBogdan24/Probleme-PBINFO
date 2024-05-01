// #548 - Hamilton
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("hamilton.in");
ofstream g("hamilton.out");

int n, m, a[12][12], x, y, st[12];
bool OK = 0, pus[12];

void citire()
{
    f >> n;
    while (f >> x >> y)
        a[x][y] = a[y][x] = 1;
}

void afis(int k)
{
    OK = 1;
    g << "1" << '\n';
    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';
}

bool verif()
{
    for (int i = 1; i <= n; i++)
        if (pus[i] == 0)
            return 0;
    return 1;
}

void back(int k)
{
    if (OK == 0)
    {
        if (k == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                st[k] = i;
                pus[i] = 1;
                back(k + 1);
                pus[i] = 0;
            }
        }
        else
        {

            for (int i = 1; i <= n; i++)
            {
                if (a[st[k - 1]][i] == 1 && pus[i] == 0)
                {
                    st[k] = i;
                    pus[i] = 1;
                    back(k + 1);
                    pus[i] = 0;
                }
                else if (a[st[k - 1]][i] == 1 && i == st[1] && verif() == 1)
                {
                    st[k] = i;
                    afis(k);
                }
            }
        }
    }
}

int main()
{
    citire();
    back(1);
    if (OK == 0)
        g << "0";

    f.close();
    g.close();
    return 0;
}
