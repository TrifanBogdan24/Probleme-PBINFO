// #1078 - Adunscad
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("adunscad.in");
ofstream g("adunscad.out");

int n, m, v[25], s;
int st[25];
bool OK = 0;

void afis()
{

    if (st[1] == -1)
        g << '-' << v[1];
    else
        g << v[1];

    for (int i = 2; i <= m; i++)
    {
        if (st[i] == -1)
            g << '-' << v[i];
        else
            g << '+' << v[i];
    }

    OK = 1;
}

void back(int k)
{
    if (OK == 0)
    {

        if (k > m)
        {
            if (s == n)
                afis();
        }
        else
        {
            for (int i = -1; i <= 1; i = i + 2)
            {
                st[k] = i;
                s += st[k] * v[k];

                back(k + 1);
                s -= st[k] * v[k];
            }
        }
    }
}

void citire()
{
    f >> n >> m;
    for (int i = 1; i <= m; i++)
        f >> v[i];
}

int main()
{
    citire();
    back(1);
    if (OK == 0)
        g << OK;

    f.close();
    g.close();
    return 0;
}
