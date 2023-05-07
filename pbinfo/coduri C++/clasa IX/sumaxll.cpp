#include <iostream>
#include <fstream>

using namespace std;
ifstream f("sumaxxl.in");
ofstream g("sumaxxl.out");
int n, i, p, m, v1[109], v2[109];

int main()
{
    f >> n;
    for (i = 1; i <= n; i++)
        f >> v1[n - i + 1];

    f >> m;
    for (i = 1; i <= m; i++)
        f >> v2[m -i +1];

    if(n<m)  // n va fi numar mar
    {
        for (i = 1; i <= m; i++)
            swap(v1[i], v2[i]);
        
        swap(n,m);
    }

    i = 1;
    while (i <= m)
    {
        v1[i] += v2[i];
        if (v1[i] > 9)
        {
            v1[i] = v1[i] % 10;
            if (i == n)
            {
                n++;
                v1[n]++;
            } else v1[i+1]++;
        }
        i++;
    }


    for (i = n; i >= 1; i--)
        g << v1[i];
    return 0;
}
