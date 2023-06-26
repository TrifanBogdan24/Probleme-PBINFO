// #669 - LinCol
#include <iostream>
#include <fstream>

using namespace std;
ifstream f("lincol.in");
ofstream g("lincol.out");

struct suma {
    int l,c;
};

int main()
{
    // declararea si initializarea variabilelor
    int a[1000][1000], poz = 0, n = 0, m = 0, p = 0;
    suma S[10000];
    char x = 'a';
    
    for (int i = 0; i < 1000; i++)
        for (int j = 0; j < 1000; j++)
            a[i][j] = 0;

    for (int i = 0; i < 10000; i++)
        S[i].l = S[i].c = 0;

    // citire + prlucrare
    f >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j <= m; j++)
        {
            f >> a[i][j];
            S[i].l += a[i][j];
            S[j].c += a[i][j];
        }
    }

    f>>p;
    for (int i = 1; i <= p; i++)
    {
        f >> x;
        f >> poz;
        if (x == 'C') g << S[poz].c << '\n';
        else if (x == 'L') g << S[poz].l << '\n';
    }
    f.close();
    g.close();
    return 0;
}

