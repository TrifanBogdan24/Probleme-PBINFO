// #1286 - Submultimi1
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("submultimi1.in");
ofstream g("submultimi1.out");

int n, a, b, st[1000];
int pus[20];

void afis(int k)
{
    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';
    g << '\n';
}

void back(int k)
{
    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                afis(k);
                back(k + 1);
                pus[i] = 0;
            }
        }
    }
    else
    {
        for (int i = st[k - 1] + 2; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                if (k <= n)
                    afis(k);
                back(k + 1);
                pus[i] = 0;
            }
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
