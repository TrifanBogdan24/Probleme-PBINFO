// #1795 - GigelAjungeAcasa
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

fstream f("gigelajungeacasa.in");
ofstream g("gigelajungeacasa.out");

int n, m, a[1005][1005], x, y, xi, yi, xf, yf, k;

int dx[8] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy[8] = {1, -1, 0, -1, 1, 0, -1, 1};

queue<pair<int, int> > Q;

void citire()
{
    f >> n >> m >> k;
    f >> xi >> yi >> xf >> yf;
    
    for (int i = 1; i <= k + 2; i++)
    {
        f >> x >> y;
        a[x][y] = -1;
    }
}

bool inside(int x, int y)
{
    return (x >= 1 && x <= n && y >= 1 && y <= m);
}

int lee()
{
    a[xi][yi] = 1;
    Q.push({xi, yi});

    while (!Q.empty())
    {
        int x = Q.front().first;
        int y = Q.front().second;

        for (int i = 0; i < 8; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            
            if (a[xx][yy] == 0 && inside(xx, yy) == true)
            {
                Q.push({xx, yy});
                a[xx][yy] = a[x][y] + 1;
                if (xx == xf && yy == yf)
                    return a[xf][yf] - 1;
            }
        }
        Q.pop();
    }

    return 0;
}

int main()
{
    citire();
    g << lee();
    /**
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)cout<<a[i][j]<<' ';
        cout<<'\n';
    }
    **/

    f.close();
    g.close();
    return 0;
}
