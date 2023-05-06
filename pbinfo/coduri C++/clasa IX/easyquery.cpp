// #1268 - EasyQuery
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("easyquery.in");
ofstream g("easyquery.out");
long long n, T, t, x, y, p, i, j, k, a[100005], b[100003];

int main()
{
    f >> n;
    for (i = 1; i <= n; i++)
        f >> a[i];
    
    f>>T;
    for (j = 1; j <= T; j++) 
    {
        f >> t >> x >> y >> p;
        if (t == 1) 
        {
            b[x] += p;
            b[y + 1] -= p;
        }
        if (t == 2)
        {
            b[x] -= p;
            b[y + 1] += p;
        }
    }

    for (k = 1; k <= n + 1; k++)
        b[k] = b[k] + b[k - 1];

    for (i = 1; i <= n; i++)
        a[i] = b[i] + a[i];

    for (i = 1; i <= n; i++)
        g << a[i] << " ";

    return 0;
}
