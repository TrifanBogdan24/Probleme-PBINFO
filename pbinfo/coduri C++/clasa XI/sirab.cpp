// #1355 - sirab
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("sirab.in");
ofstream g("sirab.out");

int n, m, st[1000], S;

bool OK = 0;

void afis()
{
    for (int i = 1; i <= n; i++)
        g << st[i] << ' ';
    g << '\n';
    OK = 1;
}

bool ok(int k)
{
    for (int i = 1; i < k; i++)
        if ((st[k] + st[i]) % (st[k] - st[i]) != 0)
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
        for (int i = st[k - 1] + 1; i <= S; i++)
        {
            st[k] = i;
            if (k == 1)
                back(k + 1);
            else
            {
                if (ok(k) == 1)
                    back(k + 1);
            }
        }
    }
}

int main()
{
    f >> S >> n;
    back(1);
    if (OK == 0)
        g << OK;

    f.close();
    g.close();
    
    return 0;
}
