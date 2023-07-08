// #556 - Flici

#include <iostream>
#include <cmath>
#include <algorithm>
#include <fstream>

using namespace std;

ifstream f("flici.in");
ofstream g("flici.out");

int s, n, m, v1[100000], v2[100000];

int main()
{
    f >> n;
    
    for (int i = 1; i <= n; i++)
        f >> v1[i];
    
    for (int i = 1; i <= n; i++)
        f >> v2[i];

    sort(v1 + 1, v1 + n + 1);
    sort(v2 + 1, v2 + n + 1);

    for (int i = 1; i <= n; i++)
    {
        if (v1[i] > v2[i])
            s += v1[i] - v2[i];
        else
            s += v2[i] - v1[i];
    }

    g << s << '\n';

    f.close();
    g.close();
    return 0;
}
