// #3450 - gegik
#include <iostream>

using namespace std;

int n, m, x, k, y, a[105][105], gint[105], gext[105];
bool ok = 1;

int main()
{
    cin >> n >> m >> k;
    
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        gext[x]++;
        gint[y]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (gint[i] + gext[i] == k)
        {
            ok = 0;
            cout << i << ' ';
        }
    }

    if (ok == 1)
        cout << "Nu exista";
    
    cout << '\n';
    return 0;
}
