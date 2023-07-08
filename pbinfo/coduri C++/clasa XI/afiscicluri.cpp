// #576 - AfisCicluri
#include <iostream>

using namespace std;

int n, m, x, y, a[105][105], st[105];
bool pus[105];

void back(int k)
{
    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            st[k] = i;
            pus[i] = 1;
            back(k + 1);
            pus[i] = 0;
        }
    }
    else if (k == 2)
    {
        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[st[1]][i] == 1)
            {
                st[k] = i;
                pus[i] = 1;
                back(k + 1);
                pus[i] = 0;
            }
        }
    }
    else if (k == 3)
    {

        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[st[2]][i] == 1 && a[i][st[1]] == 1)
            {
                st[k] = i;
                pus[i] = 1;
                cout << st[1] << ' ' << st[2] << ' ' << st[3] << '\n';
                pus[i] = 0;
            }
        }
    }
}

void citire()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;

        a[x][y] = a[y][x] = 1;
    }
}

int main()
{
    citire();
    back(1);

    return 0;
}
