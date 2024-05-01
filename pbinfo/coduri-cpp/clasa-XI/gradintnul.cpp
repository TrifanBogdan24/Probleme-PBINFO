// #586 - GradIntNul
#include <iostream>

using namespace std;

int n, m, a[105][105], gint[105], gext[105], x, y, nr, rasp[105];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        gint[y]++;
        gext[x]++;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (gint[i] == gext[i])
        {
            nr++;
            rasp[nr] = i;
        }
    }

    nr = 0;
    
    for (int i = 1; i <= n; i++)
    {
        if (gint[i] == 0)
        {
            nr++;
            cout << i << ' ';
        }
    }
    if (nr == 0)
        cout << "NU EXISTA";

    cout << '\n';
    return 0;
}
