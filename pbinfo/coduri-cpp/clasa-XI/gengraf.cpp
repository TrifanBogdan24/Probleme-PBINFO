// #466 - GenGraf
#include <iostream>
#include <fstream>


using namespace std;

ifstream f("gengraf.in");
ofstream g("gengraf.out");

int n, a[105][105], st[105];

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            g << a[i][j] << ' ';
        g << '\n';
    }
}

void back(int l, int c)
{
    if (l > n)
        afis();
    else
    {

        for (int i = 0; i <= 1; i++)
        {
            a[l][c] = a[c][l] = i;
            if (c < l - 1)
                back(l, c + 1);
            else if (c == l - 1)
                back(l + 1, 1);
        }
    }
}

int main()
{
    f >> n;
    g << (1 << ((n * n - n) / 2)) << '\n';
    back(2, 1);

    f.close();
    g.close();
    return 0;
}
