// #573 - Grade2
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

    cout << nr << '\n';
    for (int i = 1; i <= nr; i++)
        cout << rasp[i] << ' ';

    if (!nr)
        cout << '\n';

    return 0;
}
