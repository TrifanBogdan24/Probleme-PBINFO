// #82 - MinMax
#include <iostream>
#include <fstream>
using namespace std;
ifstream f("minmax.in");
ofstream g("minmax.out");

int n, v[1000], Max, Min, i;

int main()
{
    f >> n >> v[1];
    Max = Min = v[1];
    for (i = 2; i <= n; i++)
    {
        f >> v[i];
        Max = max(Max, v[i]);
        Min = min(Min, v[i]);
    }
    g << Min << " " << Max;
    f.close();
    g.close();
    return 0;
}
