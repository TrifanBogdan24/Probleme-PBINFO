// #1551 - DSLM
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("dslm.in");
ofstream g("dslm.out");

int n, p, x, y, k, st[105], a[105][105], aux[105][105], maxx = -1, rasp[999], i, j;

void citire()
{
    f >> n >> p;
    while (f >> x >> y)
        a[x][y] = aux[x][y] = 1;
}

void back(int k)
{
    if (k == 1)
    {
        st[k] = p;
        back(k + 1);
    }
    else
    {

        for (int i = 1; i <= n; i++)
        {
            if (aux[st[k - 1]][i] == 1)
            {
                aux[st[k - 1]][i] = 0;
                st[k] = i;

                if (k > maxx)
                {
                    maxx = k;
                    for (int j = 1; j <= maxx; j++)
                        rasp[j] = st[j];
                }
                back(k + 1);

                aux[st[k - 1]][i] = 1;
            }
        }
    }
}

int main()
{
    citire();
    back(1);
    
    for (int i = 1; i <= maxx; i++)
        g << rasp[i] << ' ';
    
    g << '\n';
    f.close();
    g.close();

    return 0;
}
