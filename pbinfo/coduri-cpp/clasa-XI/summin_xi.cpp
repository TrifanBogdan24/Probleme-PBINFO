// #3264 - SumMin_XI
#include <fstream>

using namespace std;

ifstream f("summin_xi.in");
ofstream g("summin_xi.out");

int n, x, Min, v[105];

int main()
{
    f >> n;

    for (int i = 1; i <= n; i++)
        f >> v[i];

    for (int j = 2; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            f >> x;
            if (x < v[i])
                v[i] = x;
        }
    }

    for (int i = 1; i <= n; i++)
        Min += v[i];
    
    g << Min << '\n';

    f.close();
    g.close();

    return 0;
}
