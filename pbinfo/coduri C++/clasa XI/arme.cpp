// #1063 - Arme
#include <algorithm>
#include <fstream>

using namespace std;

ifstream f("arme.in");
ofstream g("arme.out");

int n, m, v1[1005], v2[1005], s;

bool cmp(int a, int b)
{
    if (a > b)
        return 1;
    else
        return 0;
}

int main()
{
    f >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        f >> v1[i];
        s += v1[i];
    }

    for (int i = 1; i <= m; i++)
        f >> v2[i];

    sort(v1 + 1, v1 + n + 1);
    sort(v2 + 1, v2 + m + 1, cmp);

    for (int i = 1; i <= min(n, m); i++)
    {
        if (v2[i] > v1[i])
        {
            s -= v1[i];
            s += v2[i];
        }
    }

    g << s << '\n';

    f.close();
    g.close();
    return 0;
}
