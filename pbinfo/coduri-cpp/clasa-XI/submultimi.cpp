// #198 - Submultimi
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("submultimi.in");
ofstream g("submultimi.out");

int n, m, a[1000], st[1000];
bool pus[1000];

void afis(int k)
{

    for (int i = 1; i <= k; i++)
        g << st[i] << ' ';
    g << '\n';
}

void back(int k)
{
    int i;
    if (k > n)
        afis(k - 1);
    else
    {
        for (int i = st[k - 1] + 1; i <= n; i++)
        {
            if (!pus[i])
            {
                pus[i] = 1;
                st[k] = i;
                if (k < n)
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
