// #580 - Roy-Warshall
#include <iostream>

using namespace std;

int n, m, x, y;

bool a[109][109], rw[109][109];

void citire()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        rw[x][y] = 1;
    }
}

void roywarshall()
{
    for (int d = 1; d <= n; d++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (!rw[i][j])
                {

                    rw[i][j] = (rw[i][d] && rw[d][j]);
                }
            }
        }
    }
}

void afis()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << rw[i][j] << ' ';
        cout << '\n';
    }
}

int main()
{
    citire();
    roywarshall();
    afis();
    return 0;
}
