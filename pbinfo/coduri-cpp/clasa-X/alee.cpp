// #2167 - alee
#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

fstream f("alee.in");
ofstream g("alee.out");

int n, m, xi, yi, xf, yf, a[180][180];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

queue<pair<int, int> > Q;

void citire()
{
    int x = 0, y = 0;

    f >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        f >> x >> y;
        a[x][y] = -1;
    }
    f >> xi >> yi >> xf >> yf;
}

void bordare()
{
    for (int i = 0; i <= n + 1; i++)
        a[i][0] = a[i][n + 1] = a[0][i] = a[n + 1][i] = -1;
}

int Lee()
{
    Q.push({xi, yi});
    a[xi][yi] = 1;

    while (!Q.empty())
    {
        int x = Q.front().first;
        int y = Q.front().second;
        //  cout<<x<<' '<<y<<'\n';
        
        for (int i = 0; i < 4; i++)
        {
            int xx = x + dx[i];
            int yy = y + dy[i];
            
            if (a[xx][yy] == 0)
            {
                a[xx][yy] = a[x][y] + 1;
                Q.push({xx, yy});
                if (xx == xf && yy == yf)
                    return a[xx][yy];
            }
        }
        Q.pop();
    }

    return -1;
}

int main()
{
    citire();
    bordare();
    g << Lee();
    /**
    for(i=0;i<=n+1;i++)
    {
        for(j=0;j<=n+1;j++)cout<<a[i][j]<<' ';
        cout<<'\n';

    }
    **/

    f.close();
    g.close();
    return 0;
}
