// #589 - Roy-Floyd
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("roy-floyd.in");
ofstream g("roy-floyd.out");

int n, m, d, drum[109][109], x, y, c, cost[109][109], succ[109][109];
bool a[109][109];
int inf = 9999999;

void infinit()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cost[i][j] = cost[j][i] = inf;
            drum[i][j] = drum[j][i] = inf;
        }
    }
}
void citire()
{
    f >> n >> m;
    infinit();

    for (int i = 1; i <= m; i++)
    {
        f >> x >> y >> c;
        cost[x][y] = c;
        drum[x][y] = c;
    }
}

int main()
{
    citire();

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (cost[i][j] < inf)
                succ[i][j] = j;
            else
                succ[i][j] = 0;
        }
    }

    for (int d = 1; d <= n; d++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (drum[i][j] > drum[i][d] + drum[d][j])
                {
                    drum[i][j] = drum[i][d] + drum[d][j];
                    succ[i][j] = succ[i][d];
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (drum[i][j] == inf)
                drum[i][j] = -1;
            g << drum[i][j] << ' ';
        }
        g << '\n';
    }

    f.close();
    g.close();
    return 0;
}
