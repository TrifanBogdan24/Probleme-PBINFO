// #577 - AfisCircuite
#include <iostream>

using namespace std;

int n, m, i, j, x, y, p, maxx, a[105][105], st[105];
bool pus[105];

void afis()
{
    for (int i = 1; i <= 3; i++)
        cout << st[i] << ' ';
    cout << '\n';
}

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
                pus[i] = 1;
                st[k] = i;
                back(k + 1);
                pus[i] = 0;
            }
        }
    }
    else if (k == 3)
    {
        for (int i = 1; i <= n; i++)
        {
            if (pus[i] == 0 && a[i][st[1]] == 1 && a[st[k - 1]][i] == 1)
            {
                pus[i] = 1;

                st[k] = i;
                afis();
                pus[i] = 0;
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
    }

    for (int i = 1; i <= n; i++)
        pus[i] = 0;

    back(1);

    return 0;
}
