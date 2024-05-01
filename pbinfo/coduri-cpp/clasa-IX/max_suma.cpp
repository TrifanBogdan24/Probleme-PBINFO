// #1581 - max_suma
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("max_suma.in");
ofstream g("max_suma.out");

int n,m, a[1000][1000];
int main()
{
    f >> n >> m;
    for(int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            f >> a[i][j];

    for (int i = 1; i <= n; i++)
    {
        int max_el = a[i][1];
        for (int j = 2; j <= m; j++)
            if (a[i][j] > max_el)
                max_el = a[i][j];

        int sum = 0;
        for (int j = 1; j <= m; j++)
            sum += a[i][j];
        
        g << max_el << " " << sum << '\n';
    }

    f.close();
    g.close();
    return 0;
}
