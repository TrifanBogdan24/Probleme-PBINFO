// #1933 - Sume2
#include <iostream>
#include <fstream>
using namespace std;
fstream f("sume2.in");
ofstream g("sume2.out");
int n, m, x, y, i;
long long v[100007], s[100007];

int main()
{
    f >> n;
    s[0] = 0;
    
    for (i = 1; i <= n; i++)
    {
        f >> v[i];
        s[i] = s[i - 1] + v[i];
    }
    f >> m;
    
    for (i = 1; i <= m; i++)
    {
        f >> x >> y;
        g << s[y] - s[x - 1] << '\n';
    }

    f.close();
    g.close();
    return 0;
}