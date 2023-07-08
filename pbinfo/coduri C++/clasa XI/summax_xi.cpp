// #3263 - SumMax_XI
#include <fstream>

using namespace std;

ifstream f("summax_xi.in");
ofstream g("summax_xi.out");

int n, x, Max, v[105];

int main()
{
    f >> n;

    for (int i = 1; i <= n; i++)
    {
        f >> v[i];

        for (int j = 2; j <= n; j++)
        {
            f >> x;
            if (x > v[i])
                v[i] = x;
        }
    }

    for (int i = 1; i <= n; i++)
        Max += v[i];
    
    g << Max << '\n';

    f.close();
    g.close();

    return 0;
}
